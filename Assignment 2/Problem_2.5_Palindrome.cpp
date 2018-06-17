/*
    CH08-320142
    a2_p5.cpp
    Fezile Manana
    f.manana@jacobs-university.de
*/

#include <iostream>

using namespace std;

int Palindrome(char arr[])
{
    int i;
    int n = sizeof(arr);
    // declaration of string size, i.e. number of characters in input
    for(i = 0; i <= (n/2); i++)
    // i is incremented until it reaches halfway into the word
    {
        if(arr[i] == arr[n-1])
           {
               --n;
            //The last element 'n' is compared with the first 'i'
            //Then these are decremented and incremented respectively and compared again in the loop
               return 0;
           }

    }
    return 1;
}

int main()
{
    int i, size;
    char input[100];
    cout << "Please enter a word:" << endl;

    while(cin >> input)
    {
        if(Palindrome(input) == 0)
        {
            cout << "True" << endl;
        }
        else
        {
            cout << "False" << endl;
        }
        if((input[0] == 's') && (input[1] == 't') && (input[2] == 'o') && (input[3] == 'p'))
        {
            break;
        }
    }
    Palindrome(input);

    return 0;
}
