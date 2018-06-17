/*
    CH08-320142
    a3_p4.cpp
    Fezile Manana
    f.manana@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>
#include "Critter.h"

using namespace std;

int main(int argc, char** argv)
{

    Critter one;

    one.setHunger(5);
    one.setHeight(17.0);
    one.setBoredom(1);
    one.print();

    Critter two("Second Critter");

    two.setHunger(5);
    two.setHeight(15.0);
    two.setBoredom(3);
    two.print();

    Critter three("Third Critter", 5, 0, 19.0);
    three.print();

    Critter four("Forth Critter", 5, 2, 21.0);
    four.print();

    Critter five("Fifth Critter", 5, 6, 23.0, 42.42);
    five.print();

    return 0;
}
