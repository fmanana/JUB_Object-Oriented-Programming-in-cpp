/*
    CH08-320142
    a6 p4.cpp
    Fezile Manana
    f.manana@jacobs-university.de
*/

#include <iostream>
#include "Square.h"

Square::Square(const char *n, double side) : Area(n), Rectangle(n, side, side){
    this->side = side;
}

Square::~Square() {

}

double Square::calcArea() const {
    std::cout << "calcArea in Square...\n";
    return Rectangle::calcArea();
}

double Square::perimeter() const {
    std::cout << "perimeter in Square...\n";
    return Rectangle::perimeter();
}
