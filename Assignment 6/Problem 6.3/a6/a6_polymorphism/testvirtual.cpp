/*
    CH08-320142
    a6 p3.cpp
    Fezile Manana
    f.manana@jacobs-university.de
*/

#include <iostream>
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


const int num_obj = 7;
int main() {
    //An array, of size 'num_obj', of area objects is being created
	Area *list[num_obj];						// (1)
	//an iterator is being initialised to cycle through array
	int index = 0;								// (2)
    //a double is being initialised to 0.0 for later storing a sum
    double sum_area = 0.0;						// (3)
	cout << "Creating Ring: ";
	//objects are being created with given variables
	Ring blue_ring("BLUE", 5, 2);				// (4)
	cout << "Creating Circle: ";
	Circle yellow_circle("YELLOW", 7);
	cout << "Creating Rectangle: ";
	Rectangle green_rectangle("GREEN",5,6);
	cout << "Creating Circle: ";
	Circle red_circle("RED", 8);
	cout << "Creating Rectangle: ";
	Rectangle black_rectangle("BLACK", 10, 20);
	cout << "Creating Ring: ";
	Ring violet_ring("VIOLET", 100, 5);
	Square asure_square("ASURE", 4);
	//objects are being assigned to elements in area array
	list[0] = &blue_ring;						// (5)
	list[1] = &yellow_circle;
	list[2] = &green_rectangle;
	list[3] = &red_circle;
	list[4] = &black_rectangle;
	list[5] = &violet_ring;
	list[6] = &asure_square;

	//while loop to cycle through all elements in area array
	while (index < num_obj) {					// (7)
        //Getting colour for each object in array from keyboard
		(list[index])->getColor();				// (8)
		//Computing the total sum of the objects in the array
		sum_area += (list[index++])->calcArea();
	}
	cout << endl;
	cout << "\nThe total area is "
	//printing the sum of the areas in the array
			<< sum_area << " units " << endl;	// (9)

    index = 0;
    double sum_per = 0.0;
    while(index < num_obj)
    {
        sum_per += (list[index++])->perimeter();
    }

    cout << "\nThe total perimeter is " << sum_per << " units " << endl;

	return 0;
}
