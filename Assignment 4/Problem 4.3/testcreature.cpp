/*
    CH08-320142
    a4_p4.cpp
    Fezile Manana
    f.manana@jacobs-university.de
*/

#include <iostream>
#include "Creature.h"

using namespace std;

int main()
{
    cout << "Creating an Creature.\n";
    Creature c;
    c.run();

    cout << "\nCreating a Wizard.\n";
    Wizard w;
    w.run();
    w.hover();

    cout << "\nCreating Student.\n";
    Student s;
    s.run();
    s.stress();

    cout << "\nCreating Archer.\n";
    Archer a;
    a.run();
    a.accuracy();

    return 0;
}
