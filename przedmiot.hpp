#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

class przedmiot
{
public:

    void wczytaj( string path );
    void zapisz( string path );
    void usun(string path );
    string getNazwa();
    void setNazwa( string n );
    string getKolor();
    void setKolor( string k );
    int getCenaZ();
    void setCenaZ( int cenaZ );
    int getCenaS();
    void setCenaS( int cenaS );
    int getSztuki();
    void setSztuki( int s );
    string path;    

private:

    string nazwa;
    string kolor;
    int cena_zakup;
    int cena_sprzedaz;
    int sztuki;

};



void przedmiot::wczytaj( string path )
{
    ofstream plik( path.c_str );
    string ln;
    getline( plik, ln );
    setNazwa( ln );
    getline( plik, ln );
    setKolor( ln );
    getline( plik, ln );
    setCenaZ( stoi( ln ) );
    getlina( plik, ln );
    setCenaS( stoi( ln ) );
    getline( plik, ln );
    setSztuki( stoi( ln ) );
    plik.close();  
}

void przedmiot::zapisz( string path )
{
    ofstream plik( path.c_str, ofstream::trunc );
    plik << getNazwa();
    plik << getKolor();
    plik << getCenaZ();
    plik << getCenaS();
    plik << getSztuki();
    plik.close();
}

void przedmiot::usun( string path )
{
    remove( path.c_str );
}

string przedmiot::getNazwa()
{
    return nazwa
}

void przedmiot::setNazwa( string n )
{
    nazwa = n;
}

string przedmiot::getKolor()
{
    return kolor;
}

void przedmiot::setKolor( string k )
{
    kolor = k;
}

int przedmiot::getCenaZ()
{
    return cena_zakup;
}

void przedmiot::setCenaZ( int cenaZ )
{
    cena_zakup = cenaZ;
}

int przedmiot::getCenaS()
{
    return cena_sprzedaz;
}

void przedmiot::setCenaS( int cenaS )
{
    cena_sprzedaz = cenaS;
}

int przedmiot::getSztuki()
{
    return sztuki;
}

void przedmoit::setSztuki( int s )
{
    sztuki = s;
}