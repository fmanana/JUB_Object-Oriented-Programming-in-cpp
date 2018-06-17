/*
    CH08-320142
    a6 p4.cpp
    Fezile Manana
    f.manana@jacobs-university.de
*/

#include <iostream>
#include "Rectangle.h"

Rectangle::Rectangle(const char *n, double a, double b) : Area(n) {
    length = a;
    width = b;
}

Rectangle::~Rectangle() {
}

double Rectangle::calcArea() const {
    std::cout << "calcArea of Rectangle..." << std::endl;
	return length*width;
}

double Rectangle::perimeter() const
{
    std::cout << "perimeter of Rectangle..." << std::endl;

    return 2*(length + width);
}
