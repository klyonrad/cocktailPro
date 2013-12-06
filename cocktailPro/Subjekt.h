//@(#) Subjekt.h

#ifndef SUBJEKT_H_H
#define SUBJEKT_H_H

#include "Beobachter.h"
//
class Subjekt
{
	
public:
	//
	void benachrichtige();
	//
	void meldeAb(const Beobachter* parameter1);
	//
	void meldeAn(const Beobachter* parameter1);
	
private:
	//
	Beobachter * observer;
	
	
};

#endif
