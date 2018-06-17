/*
    CH08-320142
    a5 p1.cpp
    Fezile Manana
    f.manana@jacobs-university.de
*/

#include <iostream>
#include "Shapes.h"

using namespace std;

int main()
{

    Hexagon one, two,  three;

    one.setSidelen(2);
    one.setColour("red");
    cout << "The area of Hexagon one is " << one.areaMethod() << endl;
    cout << "The perimeter of Hexagon one is " << one.perimetreMethod() << endl;

    cout << endl;

    two.setSidelen(10);
    two.setColour("yellow");
    cout << "The area of Hexagon two is " << two.perimetreMethod() << endl;
    cout << "The perimeter of Hexagon two is " << two.perimetreMethod() << endl;

    cout << endl;

    three = two;
    cout << "The area of Hexagon three is " << three.perimetreMethod() << endl;
    cout << "The perimeter of Hexagon three is " << three.perimetreMethod() << endl;

    return 0;
}
