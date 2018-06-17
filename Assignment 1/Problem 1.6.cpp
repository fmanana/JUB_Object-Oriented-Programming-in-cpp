/*
    CH08-320142
    a1_p6.cpp
    Fezile Manana
    f.manana@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    string name;
    int randomNumber, guess;

    srand(static_cast <unsigned int> (time(0)));
    // random number generator based on time on local machine
    randomNumber = rand();
    randomNumber = (randomNumber % 100) + 1;
    // Modulo of random number to make sure random number is within the range

    cout << "Enter a name:" << endl;
    getline(cin, name);
    // Slides in the question asked for players name even though it serves no function.
    cout << "We have chosen a random number that you have to guess. It's between 1 and 100." << endl;
    cout << "Please enter your guess:" << endl;
    cin >> guess;

    while(guess)
    {
        if(guess > randomNumber)
        {
            cout << "Too high. Try again." << endl;
            cin >> guess;
        }
        if(guess < randomNumber)
        {
            cout << "Too low. Try again." << endl;
            cin >> guess;
        }
        if(guess == randomNumber)
        {
            cout << "Congratulations" << endl;
            break;
        }
    }

    return 0;
}
