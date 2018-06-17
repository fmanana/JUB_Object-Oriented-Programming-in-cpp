/*
    CH08-320142
    a5 p2.cpp
    Fezile Manana
    f.manana@jacobs-university.de
*/

#include <cstring>
#include <iostream>
#include "TournamentMember.h"

using namespace std;

//TournamentMember(const std::string& d, const std::string& f, const std::string& l, double w, double h);



void TournamentMember::print()
{
    cout << "Name: " << firstname << " " << lastname << endl;
    cout << "DOB: " << DOB << endl;
    cout << "Height: " << height << "cm" << endl;
    cout << "Weight: " << weight << "kg" << endl;
}
TournamentMember::TournamentMember()
{
    cout << "Constructor call." << endl;
}

TournamentMember::~TournamentMember()
{
    cout << "Destructor call." << endl;
}
