/*
    CH08-320142
    a6 p4.cpp
    Fezile Manana
    f.manana@jacobs-university.de
*/

#ifndef P6_3_SQUARE_H
#define P6_3_SQUARE_H


#include "Rectangle.h"

class Square : public Rectangle
{
    private:
        double side;

    public:
        Square(const char *n, double side);
        ~Square();
        double calcArea() const;
        double perimeter() const;

};


#endif
