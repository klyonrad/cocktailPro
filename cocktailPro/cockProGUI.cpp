#include "cockProGUI.h"
#include <iostream>

using namespace std;

cockProGUI::cockProGUI(Waage* myW)
{
	myWaage=myW;
	cout<<"cockProGUI wurde Erstellt"<<endl;
	myWaage->meldeAn(this);
	cout<<"cockProGUI hat sich mit Waage Verbunden"<<endl;
}

void cockProGUI::aktualisiere()
{
}
//void cockProGUI::printAusgewaehltesRezept(std::string rezeptName)
//{
//}
//
////
//void cockProGUI::menu()
//{
//	
//}
//
////
//void cockProGUI::printKonfiguration(std::string dosiererZutaten)
//{
//	
//}
//
////
//void cockProGUI::printEntleererZustand(bool entleererVentilOffen)
//{
//	
//}
//
////
//void cockProGUI::printMischbareRezepte(std::string rezeptNames)
//{
//	
//}
//
////
//void cockProGUI::printVentilZustand(std::string dosiererZutat, bool dosiererVentilOffen)
//{
//	
//}
//
////
//void cockProGUI::printSekunde()
//{
//	
//}
//
////
//void cockProGUI::printMischbehaelterZustand(bool stampfen)
//{
//	
//}
//
////
//void cockProGUI::printWaggenzustand(int gewicht, bool absolut)
//{
//	
//}






















