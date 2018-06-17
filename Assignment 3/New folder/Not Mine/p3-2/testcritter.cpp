/*
    CH08-320142
    a3_p2.cpp
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

    Critter two("Second Critter");

    two.setHunger(5);
    two.setHeight(15.0);
    two.setBoredom(3);

    Critter three("Third Critter", 5, 0, 19.0);
    Critter four("Forth Critter", 5, 2, 21.0);

    return 0;
}
