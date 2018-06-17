/*
    CH08-320142
    a6   p2.cpp
    Fezile Manana
    f.manana@jacobs-university.de
*/

// simple class for fractions

#ifndef FRACTION_H_
#define FRACTION_H_

class Fraction {

private:						// internal implementation is hidden
	int num;					// numerator
	int den;					// denominator

	int gcd(int a, int b);		// calculates the gcd of a and b
	int lcm(int a, int b);

public:
	Fraction();					// empty constructor
	Fraction(int, int = 1);     // constructor taking values for fractions and integers.
                                //Denominator by default is 1
	Fraction(const Fraction&);
    ~Fraction(){};

    //output overloader
    friend std::ostream& operator<<(std::ostream& out, const Fraction& fr);
    //input
    friend std::istream&operator>>(std::istream& in, Fraction& fr);

    //overloaded operators
    Fraction operator*(const Fraction &fr);
    Fraction operator/(const Fraction &fr);
    Fraction operator+(const Fraction &fr);
    Fraction operator-(const Fraction &fr);
    void operator=(const Fraction &fr);
    bool operator<(const Fraction &fr);
    bool operator>(const Fraction &fr);

};


#endif /* FRACTION_H_ */
