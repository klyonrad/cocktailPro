#ifndef WAAGE_H_H
#define WAAGE_H_H

#include "Subjekt.h"

using namespace std;

class Waage: Subjekt
{
private:
	int absolutgewicht;
	//int DeltaNullpunkt; //int getDifferenzgewicht();
	int differenzgewicht;	//Deltagewicht

public:
	Waage();
	int getAbsolutgewicht();
	void nullpunktSetzen();	
	void wiegen();	

	void benachrichtige();
	void meldeAb(Beobachter* parameter1);
	void meldeAn(Beobachter* parameter1);
};

#endif
