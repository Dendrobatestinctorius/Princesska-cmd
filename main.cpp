//Platforma testowa logiki dla programu Princesska Magazyn 0.0.1 cmd
//Logika do przeniesienia do API Qt6
//Dendrobates Studio Adam Machowski
//2022



#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <filesystem>
#include "przedmiot.hpp"
#include "baza.hpp"

using namespace std;



int main( int argc, char **argv )
{
  cout << "Program Śląska Pirincesska Magazyn 0.0.1 cmd" << endl;
  cout << "2022 Dendrobates Studio. Adam Machowski" << endl;
  bool quit = false;
  refreshDB();
  while ( !quit )
  {
    cout << "Odśwież magazyn[1], Wyświetl magazyn[2], Zakończ[0]" << endl;
    int opc = 0;
    switch( opc )
    {
      case 1:
        refreshDB();
        break;
      case 2:
        printDB();
        break;
      case 0:
        quit = true;
        break;
      default:
        cout << "Nie ma takiej opcji"
        break;
    }
  }
  cout << "Koniec wersji testowej!" << endl;
   return 0;
}