/*
    CH08-320142
    a4_p5.cpp
    Fezile Manana
    f.manana@jacobs-university.de
*/

#include "Shapes.h"
#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
    Circle c("Circle", 3, 4, 7);
    Rectangle r("Rectangle", 4, 5, 2, 6);
    Square s("Square", 7, 8, 6);

    c.printName();
    cout << "Area: " << c.area() << "\tPerimeter: " << c.perimeter() << endl;

    r.printName();
    cout << "Area: " << r.area() << "\tPerimeter: " << r.perimeter() << endl;

    s.printName();
    cout << "Area: " << s.area() << "\tPerimeter: " << s.perimeter() << endl;

    return 0;
}
