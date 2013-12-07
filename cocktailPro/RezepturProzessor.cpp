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
	for(int i=0;i<10;i++)
	{
		// ZutatenName[i]=dosiererZutaten[i]; // hatten wir uns nicht darauf geeinigt, dass der RezepturProzessor sich nicht extra die Zutaten aufspeichert?
		myDosierer[i]=new Dosierer(dosiererZutaten[i],myWaage);
	}
}


//
void RezepturProzessor::cocktailMischen(Rezept* rezept)
{

}

//
void RezepturProzessor::searchZutatID()
{

}