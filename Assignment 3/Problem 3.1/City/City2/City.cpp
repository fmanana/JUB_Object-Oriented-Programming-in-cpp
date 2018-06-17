#include <iostream>
#include "City.h"

void City::setName(std::string n)
{
    name = n;
}

void City::setPOI(std::string p)
{
    poi = p;
}

void City::setLocation(std::string l)
{
    location = l;
}

void City::setInhabitants(int i)
{
    inhabitants = i;
}

std::string City::getName()
{
    return name;
}

std::string City::getPOI()
{
    return poi;
}

std::string City::getLocation()
{
    return location;
}

int City::getInhabitants()
{
    return inhabitants;
}

void City::print()
{
    std::cout << "City: " << name << std::endl;
    std::cout << "Location: " << location << std::endl;
    std::cout << "Point of interest: " << poi << std::endl;
    std::cout << "Inhabitants: " << inhabitants << std::endl;
}
