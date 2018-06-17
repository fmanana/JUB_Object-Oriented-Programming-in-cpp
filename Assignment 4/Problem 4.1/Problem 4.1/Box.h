/*
    CH-320142
    a4_p1.cpp
    Fezile Manana
    f.manana@jacobs-university.de
*/

#include <iostream>

class Box
{
private:
    int height;
    int width;
    int depth;

public:
    Box();
    Box(int, int, int);
    ~Box();

    void setHeight(int h);
    void setWidth(int w);
    void setDepth(int d);
    int volume();

    int getHeight();
    int getWidth();
    int getDepth();

    void print_volume();
};
