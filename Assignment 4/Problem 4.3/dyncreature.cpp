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
    while(true)
    {
        cout << "What do you want to make?:\n";
        char input;
        cin >> input;
        if(input == 'w')
        {
            Wizard *w = new Wizard;
            hover();
            delete w;
        }
        else if(input == '1')
        {
            Student *s = new Student;
            stress();
            delete s;
        }
        else if(input == '2')
        {
            Archer *a = new Archer;
            accuracy();
            delete a;
        }
        else if(input == 'q')
        {
            break;
        }
    }

    return 0;
}
