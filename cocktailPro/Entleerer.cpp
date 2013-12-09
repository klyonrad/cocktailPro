#include "Entleerer.h"
#include <iostream>
#include <Windows.h>

using namespace std;

void Entleerer::ventilSchliessen()
{
	ventilOffen=false;
	cout<<"Ventil vom Entleerer wurde geschlossen"<<endl;
}

//
void Entleerer::entleeren()
{
	myWaage->meldeAn(this);
	cout<<"\nCocktail wird entleert..."<<endl;
	ventilOeffnen();
	cout<<"Delta:\tAbsolut:"<<endl;
	myWaage->wiegen(0,true);
	ventilSchliessen();
	myWaage->meldeAb(this);

	this->reinigen();
}

//
void Entleerer::aktualisiere()
{
	
}

//
Entleerer::Entleerer(Waage* myW)
{
	myWaage=myW;
	restmenge=0;
	ventilOffen=false;
	cout<<"Entleerer wurde erstellt"<<endl;
}

//
void Entleerer::reinigen()
{
	cout<<"reinigung..."<<endl;
	Sleep(1000);
}

//
void Entleerer::ventilOeffnen()
{
	ventilOffen=true;
	cout<<"Ventil vom Entleerer wurde geoeffnet"<<endl;
}

