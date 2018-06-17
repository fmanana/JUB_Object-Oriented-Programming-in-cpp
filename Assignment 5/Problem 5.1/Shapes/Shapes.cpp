/*
    CH08-320142
    a5 p1.cpp
    Fezile Manana
    f.manana@jacobs-university.de
*/

// please refer to shapes.h for methods documentation

#include <iostream>
#include <math.h>
#include "Shapes.h"

using namespace std;

Shape::Shape(const string& n) : name(n) {
}

void Shape::printName() const {
	cout << name << endl;
}

CenteredShape::CenteredShape(const string& n, double nx, double ny): Shape(n) {
	x = nx;
	y = ny;
}

RegularPolygon::RegularPolygon(const string& n, double nx, double ny, int nl) :
	CenteredShape(n,nx,ny)
{
	EdgesNumber = nl;
}

Circle::Circle(const string& n, double nx, double ny, double r) :
  CenteredShape(n,nx,ny)
{
	Radius = r;
}

Hexagon::Hexagon(): RegularPolygon("", 6, 0, 0)
{

}

void Hexagon::setSidelen(double side_len)
{
    this->side_len = side_len;
}

void Hexagon::setColour(const string& colour)
{
    this->colour = colour;
}

double Hexagon::getSidelen()
{
    return side_len;
}

string Hexagon::getColour()
{
    cout << "I am " << colour << endl;
    return colour;
}

double Hexagon::areaMethod()
{
    double a;
    a = ((3*sqrt(3)) / 2) * (side_len*side_len);
    return a;
}

double Hexagon::perimetreMethod()
{
    double p;
    p = side_len * 6;
    return p;
}

