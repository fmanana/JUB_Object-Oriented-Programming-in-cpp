/*
    CH08-320142
    a5 p5.cpp
    Fezile Manana
    f.manana@jacobs-university.de
*/

#include <iostream>
#include "fraction.h"

Fraction::Fraction()
{
	num = 1;
	den = 1;
}

Fraction::Fraction(int n, int d)
{
	int tmp_gcd = gcd(n, d);

	num = n / tmp_gcd;
	den = d / tmp_gcd;
}

int Fraction::gcd(int a, int b)
{
    if(a > b)
    {
        return gcd(b, a);
    }
    if(a == 0)
    {
        return b;
    }
    return gcd(b%a, a);
}

int Fraction::lcm(int a, int b)
{
	return a * b / gcd(a, b);

}

//Overloading <<
std::ostream& operator<<(std::ostream& out, const Fraction &fr)
{
    std::cout << fr.num;
    std::cout << "/";
    std::cout << fr.den;
    return out;
}

//Overloading >>
std::istream& operator>>(std::istream &in, Fraction &fr)
{
    char divide;
    in >> fr.num >> divide >> fr.den;
    return in;
}

//Overloading multiplication operator
Fraction Fraction::operator*(const Fraction &fr)
{
    int newNum = this->num*fr.num;
    int newDen = this->den*fr.den;
    int GCD = gcd(newNum, newDen);
    newNum /= GCD;
    newDen /= GCD;

    return Fraction(newNum, newDen);
}

//Overloading Division operator
Fraction Fraction::operator/(const Fraction &fr)
{
    int newNum = this->num*fr.den;
    int newDen = this->den*fr.num;
    int GCD = gcd(newNum, newDen);
    newNum /= GCD;
    newDen /= GCD;

    return Fraction(newNum, newDen);
}
