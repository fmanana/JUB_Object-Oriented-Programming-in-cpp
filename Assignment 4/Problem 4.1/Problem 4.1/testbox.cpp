/*
    CH-320142
    a4_p1.cpp
    Fezile Manana
    f.manana@jacobs-university.de
*/

#include <iostream>
#include "Box.h"

using namespace std;

int main()
{
    Box* boxes;
    int h, w, d;

    int b;
    int i = 0;

    cout << "Please enter a number of boxes:" << endl;
    cin >> b;
    boxes = new Box[b];

    cout << "Please enter the dimensions of your box." << endl;
    int sum=0;
    for(i = 0; i < b; i++)
    {
        cout << "Height of box " << i + 1  << ":" << endl;
        cin >> h;
        boxes[i].setHeight(h);
        cout << "Width of box " << i + 1  << ":" << endl;
        cin >> w;
        boxes[i].setWidth(w);
        cout << "Depth of box " << i + 1  << ":" << endl;
        cin >> d;
        boxes[i].setDepth(d);


        cout << "Volume of box " << i + 1 ;
        cout << " is: ";
        cout << boxes[i].volume() ;
        sum+=boxes[i].volume();
        cout << endl;
        cout << endl;

    }

    cout << "The total of the volumes is: " << sum << endl;
    delete [] boxes;

    return 0;
}
