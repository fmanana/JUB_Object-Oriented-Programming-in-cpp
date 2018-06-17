/*
    CH08-320142
    a6 p1.cpp
    Fezile Manana
    f.manana@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int die;
    int count = 0;
    int randomNumber;
    string colours[] = {"RED", "GREEN", "BLUE", "YELLOW"};

    // init random number generator
    srand(static_cast<unsigned int>(time(0)));
    while (count < 10)
    {
        randomNumber = rand();
        die = (randomNumber % 4);
        // modulo 4 as there are only 4 colours in array
        cout << count << ": " << colours[die] << endl;
        count++;
    }
    return 0;
}

