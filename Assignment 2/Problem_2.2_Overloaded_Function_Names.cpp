/*
    CH08-320142
    a2_p2.cpp
    Fezile Manana
    f.manana@jacobs-university.de
*/

#include <iostream>

using namespace std;

void swap(int &first, int &second)
{
    int help = first;
    first = second;
    second = help;
}

void swap(double &first, double &second)
{
    double help = first;
    first = second;
    second = help;
}

void swap(char &first, char &second)
{
    char help = first;
    first = second;
    second = help;
}

int main()
{
    int a = 5, b = 10;
    double x = 5.2, y = 10.7;
    const char *str1 = "One";
    const char *str2 = "Two";

    cout << "a = " << a << ", b = " << b << endl;
    cout << "x = " << x << ", y = " << y << endl;
    cout << "str1 = " << str1 << ", str2 = " << str2 << endl;

    swap(a, b);
    swap(x, y);
    swap(str1, str2);

    cout << "\n" << endl; // for readability when printed

    cout << "a = " << a << ", b = " << b << endl;
    cout << "x = " << x << ", y = " << y << endl;
    cout << "str1 = " << str1 << ", str2 = " << str2 << endl;

    return 0;
}
