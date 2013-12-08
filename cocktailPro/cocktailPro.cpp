#include "CocktailPro.h"
#include <iostream>
#include <fstream>

using namespace std;

CocktailPro::CocktailPro()
{
	cout<<"CocktailPro wird Erstellt..."<<endl;
	this->zutatenEinlesen();

	myRezepturProzessor.setDosiererZutaten(dosiererZutaten);
	myCocktailPossibilities=new CocktailPossibilities();
	MyRezeptbuch=myCocktailPossibilities->mischbareRezepteBerechnen(dosiererZutaten);
		
	// print  out the available recipes:
	for(int i=0;i<MyRezeptbuch->getAnzahlRezepte();i++)
	{
		Rezept* r = MyRezeptbuch->getRezept(i);
		rezeptNames.push_back(r->getName());
		cout<<rezeptNames[i]<<endl;
	}
}
void CocktailPro::printMischbareRezepte()
{
	for(unsigned int i=0;i<rezeptNames.size();i++)
	{
		if(rezeptNames[i]!=" ")
		{
			cout<<i<<". \t"<<rezeptNames[i]<<endl;
		}
	}
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
void CocktailPro::rezeptAusfuehren()
{
	
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
	printMischbareRezepte();

}

