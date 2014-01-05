#include "Dosierer.h"
#include <iostream>

using namespace std;

void Dosierer::setZutat(string zutat)
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
		stueckDosierer=false;
		cout<<"Dosierer "+zutat+" wurde erstellt"<<endl;
	}
}

string Dosierer::getZutat()
{
	return string();
}

//
void Dosierer::abfuellen(int zutatmenge)
{
	myWaage->meldeAn(this);
	myWaage->nullpunktSetzen();
	currentRezeptSchrittMenge = zutatmenge;
	ventilOeffnen();
	cout<<"Delta:\tAbsolut:"<<endl;
	myWaage->wiegen(zutatmenge,stueckDosierer);
        cout<<endl;
	ventilSchliessen();
	myWaage->meldeAb(this);
}

//
void Dosierer::aktualisiere()
{
	cout << "getDifferenzgewicht: " << myWaage->getDifferenzgewicht() << endl;
	if (myWaage->getDifferenzgewicht() >= currentRezeptSchrittMenge)
		ventilSchliessen();
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

