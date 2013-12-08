#include "RezepturProzessor.h"
#include <iostream>

using namespace std;
RezepturProzessor::RezepturProzessor(void)
{	
	cout<<"RezepturProzessor wird erstellt....."<<endl;
	aktuelleZutatID=0;
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
	int i = 0;
	for (std::vector<Dosierer>::iterator it = myDosierer->begin() ; it != myDosierer->end(); ++it)
	{
		myDosierer->emplace(it, dosiererZutaten[i], myWaage);
		i++;
	}
}


//
void RezepturProzessor::cocktailMischen(Rezept* rezept)
{
	for (int i = 0; i < rezept->getAnzahlRezeptschritte(); i++)
	{
		Rezeptschritt* currentRezeptSchritt = rezept->getRezeptSchritt(i);
		std::string currentZutat;
		int currentMenge;
		currentZutat = currentRezeptSchritt->getZutat();
		currentMenge = (int) currentRezeptSchritt->getMenge();

		if (currentZutat == "Mischen") {
			myMischbehaelter->mischen(currentMenge);
			continue;
		}
		else if (currentZutat == "Stampfen"){
			myMischbehaelter->stampfen(currentMenge);
			continue;
		}
		else {

		}

	}
}

//
void RezepturProzessor::searchZutatID()
{

}