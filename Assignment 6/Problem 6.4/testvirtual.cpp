/*
    CH08-320142
    a6 p4.cpp
    Fezile Manana
    f.manana@jacobs-university.de
*/

#include <iostream>
#include <ctime> //to generate random number based on local time
#include <cstdlib> // srand and rand function domains
using namespace std;
#include "Area.h"
#include "Circle.h"
#include "Ring.h"
#include "Rectangle.h"
#include "Square.h"

/*
                        Area
                         /\
                        /  \
                   Circle  Rectangle
                      /       \
                     /         \
                  Ring         Square
*/


const char* colours[] = {"RED", "GREEN", "BLUE", "YELLOW"};
const int num_obj = 20;

int main()
{
    double sum_area = 0.0;
    double sum_per = 0.0;

    //random number generator
    srand(static_cast<unsigned int>(time(NULL)));

    Area *list[num_obj];

    for(int i = 0; i < num_obj; i++)
    {
        int colour_idx = rand()%4;
        int object = rand()%4;

        if(object == 0)
        {
            cout << "Making Circle" << endl;
            int radius = rand()%50 + 1;
            list[i] = new Circle(colours[colour_idx], (double)radius);
        }
        else if(object == 1)
        {
            cout << "Making Rectangle" << endl;
            int len = rand()%50 + 1;
            int wid = rand()%50 + 1;
            list[i] = new Rectangle(colours[colour_idx], (double)len, (double)wid);
        }
        else if(object == 2)
        {
            cout << "Making Ring" << endl;
            int outRadius = rand()%50 + 1;
            int inRadius = rand()%outRadius + 1;
            list[i] = new Ring(colours[colour_idx], (double)outRadius, (double)inRadius);
        }
        else
        {
            cout << "Making Square" << endl;
            int side = rand()%50 + 1;
            list[i] = new Square(colours[colour_idx], side);
        }
    }

    for(int i = 0; i < num_obj; i++)
    {
        sum_per += list[i]->perimeter();
        sum_area += list[i]->calcArea();
    }

    cout << "\nTotal area: " << sum_area << endl;
    cout << "Total perimeter: " << sum_per << endl;

    delete []list; //dynamic memory deallocation

    return 0;
}
