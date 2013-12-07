#include "Dosierer.h"
#include <iostream>

using namespace std;

void Dosierer::setZutat(string zutat)
{
	
}

//
void Dosierer::abfuellen(int zutatmenge)
{
	
}

//
Dosierer::Dosierer(string z, Waage* myW)
{
	abgefuelltesGewicht=0;
	ventilOffen=false;
	myWaage=myW;
	zutat=z;
	if(zutat=="Limettenstuecke")
	{
		stueckDosierer=true;
		cout<<"Stueckdosierer "+zutat+" wurde erstellt"<<endl;
	}
	else
	{
		cout<<"Dosierer "+zutat+" wurde erstellt"<<endl;
	}
}

string Dosierer::getZutat()
{
	return string();
}

//
void Dosierer::ventilSchliessen()
{
	
}

//
void Dosierer::aktualisiere()
{
	
}

//
void Dosierer::ventilOeffnen()
{
	
}

