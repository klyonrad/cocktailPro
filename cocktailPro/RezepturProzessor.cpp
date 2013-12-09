#include "RezepturProzessor.h"
#include <iostream>

using namespace std;
RezepturProzessor::RezepturProzessor(void)
{	
	cout<<"RezepturProzessor wird erstellt....."<<endl;
	aktuelleZutatID=-1;
	myMischbehaelter=new Mischbehaelter();
	myWaage=new Waage();
	myEntleerer=new Entleerer(myWaage);
	mycockProGUI=new cockProGUI(myWaage);
	cout<<"RezepturProzessor wurde erstellt"<<endl;
}

RezepturProzessor::RezepturProzessor(string* dosiererZutaten)
{
	cout<<"RezepturProzessor wird erstellt....."<<endl;
	aktuelleZutatID=0;
	myMischbehaelter=new Mischbehaelter();
	myWaage=new Waage();
	this->setDosiererZutaten(dosiererZutaten);
	myEntleerer=new Entleerer(myWaage);
	mycockProGUI=new cockProGUI(myWaage);
	cout<<"RezepturProzessor wurde erstellt"<<endl;
}

void RezepturProzessor::setDosiererZutaten(std::string* dosiererZutaten)
{
	for(int i=0;i<10;i++)
	{
		ZutatenName[i]=dosiererZutaten[i]; // hatten wir uns nicht darauf geeinigt, dass der RezepturProzessor sich nicht extra die Zutaten aufspeichert?
		myDosierer[i]=new Dosierer(dosiererZutaten[i],myWaage);
	}
}


//
void RezepturProzessor::cocktailMischen(Rezept* rezept)
{
	for (unsigned int i = 0; i < rezept->getAnzahlRezeptschritte(); i++)
	{
		Rezeptschritt* currentRezeptSchritt = rezept->getRezeptSchritt(i);
		std::string currentZutat;
		int currentMenge;
		currentZutat = currentRezeptSchritt->getZutat();
		currentMenge = currentRezeptSchritt->getMenge(); //TODO: getMenge() returns float; needs fix
		aktuelleZutatID=-1;
		for(int j=0;j<10;j++)
		{
			if(currentZutat==ZutatenName[j])
			{
				aktuelleZutatID=j;
			}
		}
		if(aktuelleZutatID!=-1)
		{
			myDosierer[aktuelleZutatID]->abfuellen(currentMenge);
		}
		if (currentZutat == "Mischen")
			myMischbehaelter->mischen(currentMenge);
		if (currentZutat == "Stampfen")
			myMischbehaelter->stampfen(currentMenge);

	}
	myEntleerer->entleeren();
}

//
void RezepturProzessor::searchZutatID()
{

}