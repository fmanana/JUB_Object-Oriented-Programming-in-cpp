/*
    CH08-320142
    a5 p5.cpp
    Fezile Manana
    f.manana@jacobs-university.de
*/

#include <iostream>
#include "fraction.h"

using namespace std;

int main(void)
{
	Fraction a, b, c;

    cout << "Please enter 3 fractions: " << endl;
    cin >> a >> b >> c;

    cout << endl; //readability
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;

	return 0;
}
