/*
    CH08-320142
    a2_p3.cpp
    Fezile Manana
    f.manana@jacobs-university.de
*/

#include <iostream>

using namespace std;

void add_min(int arr[], int n)
{
    int i, min;
    for(i = 1; i < n; i++)
        // finding the minimum
    {
        min = arr[0];
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }

    for(i = 0; i < n; i++)
        //adding the min to each element
    {
        arr[i] = arr[i] + min;
    }
}

void deallocate(int x[])
{
    delete []x;
}

int main()
{
    int i, n;
    int *x;
    cout << "Please enter the number of elements in array 'x':" << endl;
    cin >> n;
    x = new int[n];
     cout << "Please enter your elements:" << endl;
    for(i = 0; i < n; i++)
    {
        cin >> x[i];
    }

    cout << "\nBefore function call: " << endl;
    for(i = 0; i < n; i++)
        {
            cout << x[i] << endl;
        }
    add_min(x, n);
    cout << "\nAfter call: " << endl;
    for(i = 0; i < n; i++)
    {
        cout << x[i] << endl;
    }

    deallocate(x);
    //calling deallocation function

    return 0;
}
