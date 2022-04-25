//klasa operująca magazynem


#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <filesystem>
#include "przedmiot.hpp"

class DB
{
private:
    vector<przedmiot> baza;
public:
    void refreshDB();
    void printDB();
    void freeDB();
};


//wyczyszczenie i odczyt plików
void DB::refreshDB()
{
  baza.clear
  int count;
  std::filesystem::path p1 { "Magazyn" }
  for (auto& p : std::filesystem::directory_iterator(p1))
  {
    ++count;
  }

    
  baza.resize( count );

  int i = 0;
  for (auto const& dir_entry : filesystem::directory_iterator{ p1 }) 
    {
        cout << dir_entry << '\n';
        dir_entry = baza[i].path;
        i++;
    }
  for( int c = 0; c < count; c++ )
  {
    baza[c].wczytaj( baza[c].path );
  }
  cout << "Baza danych zaktualizowana!" << endl;

}

void DB::printDB()
{
  for( int c = 0; c < baza.size(); c++ )
  {
    cout << baza[c].getNazwa() << " " << baza[c].getKolor() << " " << baza[c].getCenaZ() << " " << baza[c].getCenaS() << " " << baza[c].getSztuki() << endl;
  }
}

void DB::freeDB()
{
    baza.clear();
}