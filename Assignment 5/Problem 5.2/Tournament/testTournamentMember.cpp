/*
    CH08-320142
    a5 p2.cpp
    Fezile Manana
    f.manana@jacobs-university.de
*/

#include <iostream>
#include "TournamentMember.h"

using namespace std;
std::string TournamentMember::location = "South Africa";
int main()
{
    TournamentMember couch;

    couch.setFirstname("James");
    couch.setLastname("William");
    couch.setDOB("1985-12-03");
    couch.setHeight(176);
    couch.setWeight(86);
    couch.print();

    cout << endl;//space for readability

    //Printing by getter to show functionality
    cout << "First name by getter: " << couch.getFirstname() << endl;
    cout << "Last name by getter: " << couch.getLastname() << endl;
    cout << "DOB by getter: " << couch.getDOB() << endl;
    cout << "Height by getter: " << couch.getHeight() << endl;
    cout << "Weight by getter: " << couch.getWeight() << endl;
    return 0;
}
