#include "Subjekt.h"
#include "Waage.h"
#include <iostream>
#include <stdlib.h>
#include <unistd.h>

using namespace std;

Waage::Waage()
{
	cout<<"Waage wurde erstellt"<<endl;
	absolutgewicht=0;
	differenzgewicht=0;
}
int Waage::getAbsolutgewicht()
{
	return absolutgewicht;
}
void Waage::nullpunktSetzen()
{
	differenzgewicht=0;
}
void Waage::wiegen(int menge,bool stueck)//falls menge=0 => Entleerer, stueck in diesem fall egal;
{
	if(menge==0)
	{
		differenzgewicht=absolutgewicht;
		benachrichtige();
		for(absolutgewicht;absolutgewicht>0;)
		{
			sleep(1);
			if(absolutgewicht>=20)
			{
				absolutgewicht=absolutgewicht-20;
				differenzgewicht=differenzgewicht-20;
			}
			else
			{
				absolutgewicht=0;
				differenzgewicht=0;
			}
			benachrichtige();
		}
	}
	else if(stueck)
	{
		benachrichtige();
		for(differenzgewicht;differenzgewicht<menge;)
		{
			sleep(0.1);
			differenzgewicht=differenzgewicht+10;
			absolutgewicht=absolutgewicht+10;
			benachrichtige();
		}
	}
	else
	{
		benachrichtige();
		for(differenzgewicht;differenzgewicht<menge;)
		{
			sleep(0.1);
			differenzgewicht=differenzgewicht+4;
			absolutgewicht=absolutgewicht+4;
			benachrichtige();
		}
	}

}

void Waage::meldeAn(Beobachter* parameter1)
{
	if(observer[0]==NULL)
	{
		observer[0]=parameter1;
	}
	else if(observer[1]==NULL)
	{
		observer[1]=parameter1;
		//cout<<"anmelden erfolgreich"<<endl;
	}
	else
	{
		cout<<"unerwarteter fehler, mehr als 2 beobachter !?"<<endl;
	}
}
void Waage::meldeAb(Beobachter* parameter1)
{
	if(observer[0]==parameter1)
	{
		observer[0]=0;
	}
	else if(observer[1]==parameter1)
	{
		observer[1]=0;
		//cout<<"abmelden erfolgreich"<<endl;
	}
	else
	{
		cout<<"unerwarteter fehler, niemand zum Abmelden da !?"<<endl;
	}
}
void Waage::benachrichtige()
{
	if(observer[0]!=0)
	observer[0]->aktualisiere();
	if(observer[1]!=0)
	observer[1]->aktualisiere();
}
int Waage::getDifferenzgewicht()
{
	return differenzgewicht;
}
