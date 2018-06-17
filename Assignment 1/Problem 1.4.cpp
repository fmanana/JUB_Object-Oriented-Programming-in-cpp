/*
    CH08-320142
    a1_p4.cpp
    Fezile Manana
    f.manana@jacobs-university.de
*/

#include <iostream>
#include <string.h>

using namespace std;

int mycount(int first, int second)
{
    int diff;
    diff = first - second;

    return diff;
}

int mycount(string str, char x)
{
    int i;
    int count = 0;
    for(i = 0; i < str.length(); i++)
    {

        if(str[i] == x)
        {
            count++;
        }


    }
    if(count == 0)
        {
            return -1;
        }
    return count;
}


int main()
{
    int a, b;
    string str; // string declaration
    char x;

    cout << "Please enter either two integers:" << endl;
    cin >> a >> b;
    cout << "Please enter a string:" << endl;
    cin.ignore();
    getline(cin,str);

    cout << "Please enter a letter you want to evaluate:" << endl;
    cin >> x;

    cout << "The difference of the numbers is: " << mycount(a, b) << endl;
    cout << "The number of occurrences of " << x << " is: " << mycount(str, x) << endl;

    // The program calls both functions as question was ambiguous as to whether a specific function
    // should be called under a certain condition/input



    return 0;
}
