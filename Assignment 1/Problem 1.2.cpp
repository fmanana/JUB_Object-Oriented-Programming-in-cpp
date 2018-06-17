/*
    CH08-320142
    a1_p2.cpp
    Fezile Manana
    f.manana@jacobs-university.de
*/

#include <iostream>

using namespace std;

int main()
{
    int nr;
    float val;
    string s;

    cout << "Please enter an integer n: " << endl;
    cin >> nr;
    cout << "Please enter a float: " << endl;
    cin >> val;
    cout << "Please enter a string: " << endl;
    cin >> s;

    cout << "Here is your string and float n times: " << endl;
    int i;
    for(i = 0; i < nr; i++)
    {
        cout << val << " " << s << endl;
    }


    return 0;
}
