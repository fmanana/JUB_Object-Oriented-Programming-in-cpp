/*
    CH08-320142
    a4_p6.cpp
    Fezile Manana
    f.manana@jacobs-university.de
*/

#include <iostream>
#include <cmath>
#include "Vector.h"

using namespace std;


Vector::Vector()
{
    this->size = 0;
    this->comp = NULL;
}

Vector::Vector(const Vector& v)
{
    this->size = v.size;
    this->comp = new double[size];
    for(int i = 0; i < this->size; i++)
    {
        this->comp[i] = v.comp[i];
    }
}

Vector::Vector(const int &size, const double *comp)
{
    this->size = size;
    this->comp = new double[this->size];
    for(int i = 0; i < this->size; i++)
    {
        this->comp[i] = this->comp[i];
    }
}

Vector::~Vector()
{
    delete [] this->comp;
    this->size = 0;
}

int Vector::getSize() const
{
    return this->size;
}

double* Vector::getComponents() const
{
    return this->comp;
}

// setters
void Vector::setSize(const int &size)
{
    this->size = size;
    delete [] comp;
    this->comp = new double[this->size];
    cout << "Vector updated\n";
}

void Vector::setComponents(const double *comp, const int &size)
{
    if(this->size != size)
    {
        cout << "Error, cannot assign components\n";
        return;
    }
    for(int i = 0;  i < this->size; i++)
    {
        this->comp[i] = this->comp[i];
    }
}

// service methods
void Vector::print() const
{
    for(int i = 0; i < this->size; i++)
    {
        cout << this->comp[i] << " ";
    }
    cout << endl;
}

double Vector::norm() const
{
    double norm = 0;
    for(int i = 0; i < this->size; i++)
    {
        norm += this->comp[i];
    }
    return sqrt(norm);
}

Vector Vector::sub(const Vector &v) const
{
    double *newComp = new double[this->size];
    for(int i = 0; i < this->size; i++)
    {
        this->newComp[i] = this->comp[i] - v.comp[i];
    }
    return Vector(this->size, newComp);
}

Vector Vector::add(const Vector &v) const
{
    double *newComp = new double[this->size];
    for(int i = 0; i < this->size; i++)
    {
        this->newComp[i] = this->comp[i] + v.comp[i];
    }
    return Vector(this->size, newComp);
}

double Vector::scalar(const Vector &v) const
{
    double prod = 0;
    for(int i = 0; i < this->size; i++)
    {
        prod += this->comp[i]*v.comp[i];
    }
    return prod;
}
