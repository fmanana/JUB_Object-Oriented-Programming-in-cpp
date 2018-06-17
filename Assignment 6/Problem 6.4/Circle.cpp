/*
    CH08-320142
    a6 p4.cpp
    Fezile Manana
    f.manana@jacobs-university.de
*/

#include <iostream>
#include "Circle.h"

Circle::Circle(const char *n, double a) : Area(n) {
	radius = a;
}

Circle::~Circle() {
}

double Circle::calcArea() const {
	std::cout << "calcArea of Circle..." << std::endl;
	return radius * radius * 3.141593;
}

double Circle::perimeter() const
{
    std::cout << "perimeter of Circle..." << std::endl;

    return (2*radius*3.1415);
}
