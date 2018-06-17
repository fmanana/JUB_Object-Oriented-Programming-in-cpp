/*
    CH08-320142
    a3_p6.cpp
    Fezile Manana
    f.manana@jacobs-university.de
*/

#include "Complex.h"
#include <iostream>
#include <cmath>
using namespace std;

Complex::Complex()
{
    this->real = 0;
    this->imag = 0;
}

Complex::Complex(const int &real, const int &imag)
{
    this->real = real;
    this->imag = imag;
}
    //Construction

Complex::~Complex()
{
}
    //Destruction

int Complex::getReal()
{
    return this->real;
}

int Complex::getImaginary()
{
    return this->imag;
}
    //Getters


void Complex::setReal(const int &real)
{
    this->real = real;
}

void Complex::setImaginary(const int &imag)
{
    this->imag = imag;
}
    //Setters

void Complex::print()
{
    string signR, signI;
    signR = "";
    signI = "+";
    if(this->real < 0)
    {
        signR = "-";
    }
    if(this->imag < 0)
    {
        signI = "-";
    }
    cout << signR << abs(this->real) << " " << signI << " " << abs(this->imag) << "i" << endl;
}

Complex Complex::getConjugation()
{
    return Complex(this->real, -this->imag);
}

Complex Complex::add(const Complex &c)
{
    return Complex(this->real + c.real, this->imag + c.imag);
}

Complex Complex::sub(const Complex &c)
{
    return Complex(this->real - c.real, this->imag - c.imag);
}

Complex Complex::multiplication(const Complex &c)
{
    return Complex(this->real*c.real - this->imag*c.imag, this->real*c.imag + c.real*this->imag);
}
