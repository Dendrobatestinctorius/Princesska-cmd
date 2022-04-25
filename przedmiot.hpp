//klasa operująca pojedynczymi elementami magazynu

#include <iostream>
#include <string>
#include <fstream>


using namespace std;

class przedmiot
{
public:

    void wczytaj( string path );
    void zapisz();
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

void przedmiot::nowy()



void przedmiot::wczytaj( string path )
{
    ofstream plik( path.c_str );
    string ln;
    getline( plik, ln );
    nazwa = ln;
    getline( plik, ln );
    kolor = ln;
    getline( plik, ln );
    cena_zakup = stoi( ln );
    getlina( plik, ln );
    cena_sprzedaz = stoi( ln );
    getline( plik, ln );
    sztuki = stoi( ln );
    plik.close();  
}

void przedmiot::zapisz()
{
    string nm = "Magazyn/";
    nm.append( nazwa );
    nm.append( ".p" );
    ofstream plik( nm.c_str, ofstream::trunc );
    plik << nazwa;
    plik << kolor;
    plik << cena_zakup;
    plik << cena_sprzedaz;
    plik << sztuki;
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