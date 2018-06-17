/*
    CH08-320142
    a2_p4.cpp
    Fezile Manana
    f.manana@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void vowelReplacement(char arr[])
{
    int i;

    for(i = 0; i < 10; i++)
    // 10 is chosen as the maximum because the longest word contains 10 characters
    {
        if((arr[i] == 'a') || (arr[i] == 'e') || (arr[i] == 'i')
           || (arr[i] == 'o') || (arr[i] == 'u'))
           {
               arr[i] = '_';
           }
    cout << arr[i];
    }

}

void gameLoop(string guess[], string arr[])
{
    int guesses = 0;
    int word;
    srand(static_cast <unsigned int> (time(0)));
    word = rand();
    word = (word % 15) + 1;
    //These for lines generate a random number 'word' from 0 to 9
    // This number will be used to pick a word from the list of words
   /* if(guess == arr[])
    {

    }*/

}

int main()
{
    unsigned int position;
    int i;
    string guess;
    string arr[15] = {"computer", "television", "keyboard", "magazine", "book",
                    "table", "picture", "laptop", "bottle", "cellphone",
                    "bed", "watch", "tree", "elephant", "hamster"};

    cout << "The vowels of the following word have been removed. Try to guess the word." << endl;

    vowelReplacement(arr[i]);
    position =
    {
        cout << arr[i] << endl;
    }

    getline(cin, guess);

    return 0;
}
