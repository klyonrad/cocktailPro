#include "Dosierer.h"
#include <iostream>

using namespace std;

void Dosierer::setZutat(string zutat)
{
	
}

//
void Dosierer::abfuellen(int zutatmenge)
{
	myWaage->meldeAn(this);
	myWaage->nullpunktSetzen();
	ventilOeffnen();
	cout<<"Delta:\tAbsolut:"<<endl;
	myWaage->wiegen(zutatmenge,stueckDosierer);
	ventilSchliessen();
	myWaage->meldeAb(this);
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
		stueckDosierer=false;
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
	ventilOffen=false;
	if(stueckDosierer)
	{
		cout<<"Ventil vom Stueckdosierer "+zutat+"  wurde geschlossen"<<endl;
	}
	else
	{
		cout<<"Ventil vom Dosierer "+zutat+"  wurde geschlossen"<<endl;
	}
}

//
void Dosierer::aktualisiere()
{
}

//
void Dosierer::ventilOeffnen()
{
	ventilOffen=true;
	if(stueckDosierer)
	{
		cout<<"\nVentil vom Stueckdosierer "+zutat+"  wurde geoeffnet"<<endl;
	}
	else
	{
		cout<<"\nVentil vom Dosierer "+zutat+"  wurde geoeffnet"<<endl;
	}
}

