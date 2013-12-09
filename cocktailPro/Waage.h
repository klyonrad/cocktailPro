#ifndef WAAGE_H_H
#define WAAGE_H_H

#include "Subjekt.h"

using namespace std;

class Waage: Subjekt
{
private:
	int absolutgewicht;
	//int DeltaNullpunkt; //
	int differenzgewicht;	//Deltagewicht
	
public:
	Waage();
	int getAbsolutgewicht();
	int getDifferenzgewicht();
	void nullpunktSetzen();	
	void wiegen(int menge,bool stueck);	

	void benachrichtige();
	void meldeAb(Beobachter* parameter1);
	void meldeAn(Beobachter* parameter1);
};

#endif
