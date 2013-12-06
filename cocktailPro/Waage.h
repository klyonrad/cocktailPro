//@(#) Waage.h

#ifndef WAAGE_H_H
#define WAAGE_H_H

#include "Subjekt.h"
//
class Waage: Subjekt
{
	
public:
	//
	int getAbsolutgewicht();
	//
	int getDifferenzgewicht();
	//
	void nullpunktSetzen();
	//
	Waage();
	//
	void wiegen();
	
private:
	//
	int absolutgewicht;
	
	//
	int DeltaNullpunkt;
	
	//
	int differenzgewicht;
	
	
};

#endif
