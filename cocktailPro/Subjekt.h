#ifndef SUBJEKT_H_H
#define SUBJEKT_H_H

#include "Beobachter.h"

using namespace std;

class Subjekt
{
protected:
	Beobachter* observer[2];	//da in diesem programm maximal 2 zeitgleich beobachter sind, ansonsten liste  !!!!!!!!!!!

public:
	Subjekt();
	virtual void benachrichtige();
	virtual void meldeAb(Beobachter* parameter1);
	virtual void meldeAn(Beobachter* parameter1);
	

	
	
};

#endif
