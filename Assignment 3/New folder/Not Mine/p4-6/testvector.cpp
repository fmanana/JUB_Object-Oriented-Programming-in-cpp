/*
    CH08-320142
    a4_p6.cpp
    Fezile Manana
    f.manana@jacobs-university.de
*/

#include <iostream>
#include "Vector.h"

using namespace std;

int main()
{
    Vector one;
    one.setSize(3);
    double comp[] = {5, 12, 6, 3, 2};
    one.setComponents(comp, 3);

    Vector two(one);

    Vector three(3, comp);


    cout << one.norm() << endl;
    (one.add(three)).print();
    (one.sub(three)).print();
    cout << one.scalar(three) << endl;

    return 0;
}
