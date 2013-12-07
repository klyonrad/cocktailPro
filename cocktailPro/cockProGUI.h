#ifndef COCKPROGUI_H_H
#define COCKPROGUI_H_H

#include "Beobachter.h"
#include "Waage.h"
#include <string>

using namespace std;

class cockProGUI: Beobachter
{
private:
	Waage * myWaage;
	
public:
	cockProGUI(Waage* myWaage);
	void aktualisiere();
//	void menu();
//	void printAusgewaehltesRezept(std::string rezeptName);
//	void printEntleererZustand(bool entleererVentilOffen);
//    void printKonfiguration(std::string dosiererZutaten);
//    void printMischbareRezepte(std::string rezeptNames);
//	void printMischbehaelterZustand(bool stampfen);
//	void printSekunde();
//	void printVentilZustand(std::string dosiererZutat, bool dosiererVentilOffen);
//	void printWaggenzustand(int gewicht, bool absolut);
};

#endif
