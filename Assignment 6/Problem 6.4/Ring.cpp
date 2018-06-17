/*
    CH08-320142
    a6 p4.cpp
    Fezile Manana
    f.manana@jacobs-university.de
*/

#include <iostream>
#include "Ring.h"

Ring::Ring(const char *n, double outer, double inner)
					: Area(n), Circle(n, outer) {
	innerradius = inner;
}

Ring::~Ring() {
}

double Ring::calcArea() const {
    std::cout << "calcArea of Ring..." << std::endl;
	return (Circle::calcArea()-
		(innerradius * innerradius * 3.141593));
}

double Ring::perimeter() const
{
    std::cout << "perimeter of Ring..." << std::endl;

    return (Circle::calcArea() + 2*innerradius*3.1415);
}
