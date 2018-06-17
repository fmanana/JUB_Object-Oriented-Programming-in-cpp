/*
    CH08-320142
    a1_p3.cpp
    Fezile Manana
    f.manana@jacobs-university.de
*/

#include <iostream>

using namespace std;

int sign_function(int input)
{
    int sign;

    if(input < 0)
    {
        sign = -1;
    }
    else if(input > 0)
    {
        sign = 1;
    }
    else
        sign = 0;
    return sign;
}

int main()
{
    int x;
    cout << "Please enter an integer:" << endl;
    cin >> x;
    cout << "The sign for that integer is: " << sign_function(x) << endl;

    return 0;
}
