/*
    CH08-320142
    a1_p5.cpp
    Fezile Manana
    f.manana@jacobs-university.de
*/

#include <iostream>

using namespace std;

int main()
{
    string result;
    cout << "Please enter a string:" << endl;
    char input_char;
    bool running = true;

    while(running)
    {
        cin >> input_char;
        if(input_char == 'q')
        {
            running = false;
            // Stops taking input when 'q' is entered as boolean becomes false and ends loop
        }
        else
        {
            result += input_char;
            // Concatenating the string character by character under the else condition...
            // ...'q' hasn't been entered yet
        }
    }

    cout << result << endl;

    return 0;
}
