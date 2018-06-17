/*
    CH08-320142
    a6 p2.cpp
    Fezile Manana
    f.manana@jacobs-university.de
*/

#include <iostream>
#include "fraction.h"

using namespace std;

int main(void)
{
	Fraction a, b;

    cout << "Please enter 2 fractions: " << endl;
    cin >> a >> b;

    cout << endl; //readability
    cout << a << endl;
    cout << b << endl;

    Fraction sum, diff;
    sum = a + b;
    diff = a - b;

    cout << "The sum is: " << sum << endl;
    cout << "The difference is: " << diff << endl;

    if(a > b)
    {
        cout << a << " is larger than " << b << endl;
    }
    else if(a < b)
    {
        cout << a << " is smaller than " << b << endl;
    }
    else
    {
        cout << "The fractions are equivalent." << endl;
    }

	return 0;
}
