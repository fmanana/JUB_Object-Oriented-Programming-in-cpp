/*
    CH08-320142
    a3_p4.cpp
    Fezile Manana
    f.manana@jacobs-university.de
*/


#include <iostream>
#include "Critter.h"

using namespace std;

void Critter::setName(string& newname)
{
    name = newname;
}

void Critter::setHunger(int newhunger)
{
    hunger = newhunger;
    convert();
}

void Critter::convert()
{
    double newHunger = 10.0*(double)hunger;
    hunger = (int)newHunger;
}

void Critter::print()
{
    cout << "I am " << name << ". My hunger level is " << hunger << "."
    << "My height is " << height << ". My boredom level is " << boredom
    << ". My thirst level is " << thirst << "." << endl;
}

void Critter::setBoredom(int boredom)
{
    this->boredom = boredom;
}

void Critter::setHeight(double height)
{
    this->height = height;
}

void Critter::setThirst(double thirst)
{
    this->thirst = thirst;
}

int Critter::getHunger()
{
    return hunger;
}

Critter::Critter()
{
    name = "critter";
    height = 10.0;
    boredom = 0;
    hunger = 0;
    convert();
    this->thirst = this->hunger;
    cout << "Your first object:\n"
    << "Name: " << this->name << endl
    << "Height: " << height << endl
    << "Hunger: " << hunger << "%" << endl
    << "Boredom: " << boredom << endl
    << "Thirst: " << this->thirst << endl;
}

Critter::Critter(const string &name)
{
    this->name = name;
    height = 10.0;
    hunger = 0;
    boredom = 0;
    convert();
    this->thirst = this->hunger;
    cout << "Your second object:\n"
    << "Name: " << this->name << endl
    << "Height: " << height << endl
    << "Hunger: " << hunger << "%" << endl
    << "Boredom: " << boredom << endl
    << "Thirst: " << this->thirst << endl;
}

Critter::Critter(const string &name, const int &hunger, const int &boredom, const double &height)
{
    this->name = name;
    this->height = 10.0;
    this->hunger = hunger;
    this->boredom = boredom;
    convert();
    this->thirst = this->hunger;
    cout << "Your third object:\n"
    << "Name: " << this->name << endl
    << "Height: " << this->height << endl
    << "Hunger: " << this->hunger << "%" << endl
    << "Boredom: " << this->boredom << endl
    << "Thirst: " << this->thirst << endl;
}

Critter::Critter(const string &name, const int &hunger, const int &boredom, const double &height, const double &thirst)
{
    this->name = name;
    this->height = 10.0;
    this->hunger = hunger;
    this->boredom = boredom;
    this->thirst = thirst;
    convert();
    cout << "Your forth object:\n"
    << "Name: " << this->name << endl
    << "Height: " << this->height << endl
    << "Hunger: " << this->hunger << "%" << endl
    << "Boredom: " << this->boredom << endl
    << "Thirst: " << this->thirst << endl;
}
