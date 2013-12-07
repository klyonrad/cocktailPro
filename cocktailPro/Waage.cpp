#include "Subjekt.h"
#include "Waage.h"
#include <iostream>

using namespace std;

Waage::Waage()
{
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
void Waage::wiegen()
{
	
}
//bool Person::groeßerAls(SortTreeElement* als)
//{	
//	return ((this->personalnummer)>(((Person*)als)->personalnummer));
//}
void Waage::meldeAn(Beobachter* parameter1)
{
	if(observer[0]==NULL)
	{
		observer[0]=parameter1;
	}
	else if(observer[1]==NULL)
	{
		observer[1]=parameter1;
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
//int Waage::getDifferenzgewicht()
//{
//	return 0;
//}
