#include "CocktailPro.h"
#include <iostream>
#include <fstream>

using namespace std;

CocktailPro::CocktailPro()
{
	anzahlRezepte=20;
	cout<<"CocktailPro wird Erstellt..."<<endl;
	this->zutatenEinlesen();
	myRezepturProzessor= new RezepturProzessor(dosiererZutaten);
	myCocktailPossibilities=new CocktailPossibilities();
	MyRezeptbuch=myCocktailPossibilities->mischbareRezepteBerechnen(dosiererZutaten);
	for (int i=0;i<anzahlRezepte;i++)
	{
		rezeptNames[i]=" ";
	}
	for(int i=0;i<MyRezeptbuch->getAnzahlRezepte()  &&  i<anzahlRezepte;i++)
	{
		Rezept* r = MyRezeptbuch->getRezept(i);
		rezeptNames[i]= r->getName();
		cout<<rezeptNames[i]<<endl;
	}
}
void CocktailPro::printMischbareRezepte()
{
	for(int i=0;i<anzahlRezepte;i++)
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

