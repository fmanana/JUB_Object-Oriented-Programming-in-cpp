/*
    CH08-320142
    a3_p6.cpp
    Fezile Manana
    f.manana@jacobs-university.de
*/

#ifndef _COMPLEX_H
#define _COMPLEX_H

#include <iostream>
using namespace std;

class Complex{

private:

    int real;
    int imag;

public:

    Complex();
    Complex(const int &real, const int &imag);
    ~Complex();

    int getReal();
    int getImaginary();

    void setReal(const int &real);
    void setImaginary(const int &imag);

    void print();
    Complex getConjugation();
    Complex add(const Complex &c);
    Complex sub(const Complex &c);
    Complex multiplication(const Complex &c);

};

#endif
