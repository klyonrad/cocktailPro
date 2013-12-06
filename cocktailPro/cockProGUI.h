//@(#) cockProGUI.h

#ifndef COCKPROGUI_H_H
#define COCKPROGUI_H_H

#include <string>
//
class cockProGUI
{
	
public:
	//
	void menu();
	//
	void printAusgewaehltesRezept(std::string rezeptName);
	//
	void printEntleererZustand(bool entleererVentilOffen);
	//
    void printKonfiguration(std::string dosiererZutaten);
	//
    void printMischbareRezepte(std::string rezeptNames);
	//
	void printMischbehaelterZustand(bool stampfen);
	//
	void printSekunde();
	//
	void printVentilZustand(std::string dosiererZutat, bool dosiererVentilOffen);
	//
	void printWaggenzustand(int gewicht, bool absolut);
	
};

#endif
