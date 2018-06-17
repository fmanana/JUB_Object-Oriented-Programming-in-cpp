/*
    CH-320142
    a4_p1.cpp
    Fezile Manana
    f.manana@jacobs-university.de
*/

#include <iostream>
#include "Box.h"

Box::Box()
{
    height = width = depth = 0;
}

Box::~Box()
{

}

Box::Box(int h, int w, int d)
{
    height = h;
    width = w;
    depth = d;
}

void Box::setHeight(int h)
{
    height = h;
}

void Box::setWidth(int w)
{
    width = w;
}

void Box::setDepth(int d)
{
    depth = d;
}

int Box::getHeight()
{
    return height;
}

int Box::getWidth()
{
    return width;
}

int Box::getDepth()
{
    return depth;
}

int Box::volume()
{
    return height*width*depth;
}
