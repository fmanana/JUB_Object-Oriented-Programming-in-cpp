// please refer to shapes.h for methods documentation

#include <iostream>
#include "Shapes.h"

using namespace std;

// service methods

void Shape::printName() const {
	cout << name << endl;
}

// constructors

Shape::Shape() : name(""){}

Shape::Shape(const string& n) : name(n) {
}

Shape::Shape(const Shape& s){
	this->name = s.name;
}

CenteredShape::CenteredShape() : Shape(){
	this->x = 0;
	this->y = 0;
}

CenteredShape::CenteredShape(const CenteredShape& cs) : Shape(cs){
	this->x = cs.x;
	this->y = cs.y;
}

CenteredShape::CenteredShape(const string& n, double nx, double ny): Shape(n) {
	this->x = nx;
	this->y = ny;
}


RegularPolygon::RegularPolygon() : CenteredShape(){
	this->EdgesNumber = 0;
}

RegularPolygon::RegularPolygon(const RegularPolygon& rp) : CenteredShape(rp){
	this->EdgesNumber = rp.EdgesNumber;
}

RegularPolygon::RegularPolygon(const string& n, double nx, double ny, int nl) :
CenteredShape(n,nx,ny)
{
	this->EdgesNumber = nl;
}

Circle::Circle() : CenteredShape(){
	this->Radius = 0;
}

Circle::Circle(const Circle& circle) : CenteredShape(circle){
	this->Radius = circle.Radius;
}

Circle::Circle(const string& n, double nx, double ny, double r) :
CenteredShape(n,nx,ny)
{
	this->Radius = r;
}

Rectangle::Rectangle() : RegularPolygon(){}

Rectangle::Rectangle(const Rectangle& r) : RegularPolygon(r)
{
	this->width = r.width;
	this->height = r.height;
}

Rectangle::Rectangle(const string &n, double nx, double ny, double nwidth,
                     double nheight) : RegularPolygon(n, nx, ny, 4)
{
	this->width = nwidth;
	this->height = nheight;
}

Square::Square() : Rectangle(){}

Square::Square(const Square& sq) : Rectangle(sq){}

Square::Square(const string &n, double nx, double ny, double nside) : Rectangle(n, nx, ny, nside, nside){}

// getters and setters

string Shape::getName()
{
	return name;
}

void Shape::setName(const string &s)
{
	this->name = s;
}

double CenteredShape::getX()
{
	return x;
}
double CenteredShape::getY()
{
	return y;
}

void CenteredShape::setX(const double &x)
{
	this->x = x;
}
void CenteredShape::setY(const double &y)
{
	this->y = y;
}

int RegularPolygon::getEdgesNumber()
{
	return EdgesNumber;
}
void RegularPolygon::setEdgesNumber(const int &EdgesNumber)
{
	this->EdgesNumber = EdgesNumber;
}

double Circle::getRadius()
{
	return Radius;
}
void Circle::setRadius(const double &Radius)
{
	this->Radius = Radius;
}

double Rectangle::getWidth()
{
	return width;
}

double Rectangle::getHeight()
{
	return height;
}

void Rectangle::setWidth(const double &width)
{
	this->width = width;
}

void Rectangle::setHeight(const double &height)
{
	this->height = height;
}

// service methods

double Circle::perimeter()
{
	return (2.0*3.1415*Radius);
}

double Rectangle::perimeter()
{
	return (2.0*width + 2*height);
}

double Circle::area()
{
	return (Radius*Radius*3.1415);
}

double Rectangle::area()
{
	return width*height;
}
