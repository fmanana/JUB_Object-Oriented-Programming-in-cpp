/*
    CH08-320142
    a2_p1.cpp
    Fezile Manana
    f.manana@jacobs-university.de
*/

#include <iostream>

using namespace std;

int myfirst(int arr[], int elements)
// here 'elements' would be the elements of the array declared in the main
{
    int i = 0;
    for(i = 0; i < elements; i++)
    {
        if((arr[i] > 0) && (arr[i] % 2 == 1))
            return arr[i];
    }
    return -1;
}

double myfirst(double arr[], int elements)
{
    int i = 0;
    for(i = 0; i < elements; i++)
    {
        if((arr[i] > 0) && (arr[i] == (int)arr[i]))
            return arr[i];
    }
        return -1.1;
}

char myfirst(char arr[], int elements)
{
    int i = 0;
    for(i = 0; i < elements; i++)
    {
        if((arr[i] == 'A') || (arr[i] == 'a') || (arr[i] == 'E') || (arr[i] == 'e') ||
           (arr[i] == 'I') || (arr[i] == 'i') || (arr[i] == 'O') || (arr[i] == 'o') ||
           (arr[i] == 'U') || (arr[i] == 'u'))

        return arr[i];
    }
    return '0';
}

int main()
{
    int elements = 5;
    // declaration of array sizes
    int integers[] = {-2, 4, 12, 3, -1};
    double doubles[] = {12.432, -432.1, -12, 43, 0};
    char chars[] = {'W', 'g', 'Z', 'e', 'F'};

    cout << myfirst(integers, elements) << endl;
    cout << myfirst(doubles, elements) << endl;
    cout << myfirst(chars, elements) << endl;

    return 0;
}
