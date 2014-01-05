#include "CocktailPro.h"
#include <iostream>
#include <fstream>


using namespace std;

CocktailPro::CocktailPro()
{
	cout<<"CocktailPro wird erstellt..."<<endl;
	this->zutatenEinlesen();

	myRezepturProzessor.setDosiererZutaten(dosiererZutaten);
	myCocktailPossibilities=new CocktailPossibilities();
	MyRezeptbuch=myCocktailPossibilities->mischbareRezepteBerechnen(dosiererZutaten);
        //cout<<myCocktailPossibilities->getAnzahlRezepte()
		
	// print  out the available recipes:
	for(int i=0;i<MyRezeptbuch->getAnzahlRezepte();i++)
	{
		Rezept* r = MyRezeptbuch->getRezept(i);
		rezeptNames.push_back(r->getName());
		//cout<<rezeptNames[i]<<endl;
	}
	cout<<"CocktailPro wurde erstellt"<<endl;
}
void CocktailPro::printMischbareRezepte()
{	cout<<"\n\n-------------------------------------------------------------"<<endl;
	
	cout<<"Bitte Cocktail aus folgender Liste zum zubereiten auswaehlen:\n\n";
	unsigned int i;
	for(i=0;i<rezeptNames.size();i++)
	{
		if(rezeptNames[i]!=" ")
		{
			cout<<i<<". \t"<<rezeptNames[i]<<endl;
		}
	}
	cout<<"\n"<<i<<". \tBeenden"<<endl;
	cout<<"-------------------------------------------------------------"<<endl;
}

//
void CocktailPro::printMenu()
{
	
}

//
void CocktailPro::printKonfig()
{
	
}

//
bool CocktailPro::rezeptAusfuehren()
{
	int auswahl;
	cin>>auswahl;
	if(auswahl==rezeptNames.size())
	{
		return true;
	}
	else
	{
		Rezept* r = MyRezeptbuch->getRezept(auswahl);		
		cout<<"rezept : "<<r->getName()<<" wurde ausgewaehlt"<<endl<<endl;
		myRezepturProzessor.cocktailMischen(r);
		return false;
	}
}

//
void CocktailPro::zutatenEinlesen()
{
	fstream lesen("zutaten.txt", ios::in);
	for(int i=0;i<10;i++)
	{
		if(!lesen.eof())
		{
			getline(lesen,dosiererZutaten[i]);
		}
	}
	
}

void CocktailPro::main()
{
	bool beenden=false;
	while(!beenden)
	{
		printMischbareRezepte();
		beenden=rezeptAusfuehren();
	}

}

