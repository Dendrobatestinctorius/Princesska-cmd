#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <filesystem>
#include "przedmiot.hpp"

using namespace std;



int main( int argc, char **argv )
{
    int count;
    std::filesystem::path p1 { "Magazyn" }
    for (auto& p : std::filesystem::directory_iterator(p1))
    {
      ++count;
    }

    vector<przedmiot> rzecz;
    rzecz.resize( count );

    int i = 0;
    for (auto const& dir_entry : std::filesystem::directory_iterator{ p1 }) 
    {
        std::cout << dir_entry << '\n';
        dir_entry = rzecz[i].path;
        i++;
    }


   return 0;
}