/*
    CH08-320142
    a5 p3.cpp
    Fezile Manana
    f.manana@jacobs-university.de
*/

#include <iostream>
#include "TournamentMember.h"

using namespace std;

//Location change
std::string TournamentMember::location = "Bremen";

int main()
{
    Player a, b, c;

    a.increaseGoals();
    a.setFirstname("Robin");
    a.setLastname("Williams");
    a.setNumber(14);
    a.setPosition("Defender");
    a.setFoot("left");
    a.printp();

    //Printing by getter, to test functionality
    cout << "First name by getter: " << a.getFirstname() << endl;
    cout << "Last name by getter: " << a.getLastname() << endl;
    cout << "Position by getter: " << a.getPosition() << endl;
    cout << "Number by getter: " << a.getNumber() << endl;
    cout << "Foot by getter: " << a.getFoot() << endl;
    cout << endl;

    b.setFirstname("Michael");
    b.setLastname("Jackson");
    b.setNumber(12);
    b.setPosition("Goal Keeper");
    b.setFoot("Right");
    b.printp();

    //Printing by getter, to test functionality
    cout << "First name by getter: " << b.getFirstname() << endl;
    cout << "Last name by getter: " << b.getLastname() << endl;
    cout << "Position by getter: " << b.getPosition() << endl;
    cout << "Number by getter: " << b.getNumber() << endl;
    cout << "Foot by getter: " << b.getFoot() << endl;
    cout << endl;

    c.increaseGoals();
    c.increaseGoals();
    c.setFirstname("Mom's");
    c.setLastname("Spaghetti");
    c.setNumber(07);
    c.setPosition("Striker");
    c.setFoot("Right");
    c.printp();

    //Printing by getter, to test functionality
    cout << "First name by getter: " << c.getFirstname() << endl;
    cout << "Last name by getter: " << c.getLastname() << endl;
    cout << "Position by getter: " << c.getPosition() << endl;
    cout << "Number by getter: " << c.getNumber() << endl;
    cout << "Foot by getter: " << c.getFoot() << endl;
    cout << endl;

    cout << endl;

    return 0;
}
