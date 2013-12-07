#include "RezepturProzessor.h"
#include <iostream>

using namespace std;

RezepturProzessor::RezepturProzessor(string* dosiererZutaten)
{
	cout<<"RezepturProzessor wird erstellt....."<<endl;
	aktuelleZutatID=0;
	myMischbehaelter=new Mischbehaelter();
	myWaage=new Waage();
	for(int i=0;i<10;i++)
	{
		ZutatenName[i]=dosiererZutaten[i];
		myDosierer[i]=new Dosierer(ZutatenName[i],myWaage);
	}
	myEntleerer=new Entleerer(myWaage);
	mycockProGUI=new cockProGUI(myWaage);
	cout<<"RezepturProzessor wurde erstellt"<<endl;
}

//
void RezepturProzessor::cocktailMischen(Rezept* rezept)
{
	
}

//
void RezepturProzessor::searchZutatID()
{
	
}

