//@(#) Entleerer.h

#ifndef ENTLEERER_H_H
#define ENTLEERER_H_H

#include "Beobachter.h"
#include "Waage.h"
//
class Entleerer: Beobachter
{
	
public:
	//
	void aktualisiere();
	//
	void entleeren();
	//
	Entleerer(const Waage& myWaage);
	
private:
	//
	Waage * myWaage;
	
	//
	int restmenge;
	
	//
	bool ventilOffen;
	
	//
	void reinigen();
	//
	void ventilOeffnen();
	//
    void ventilSchliessen();
	
};

#endif
