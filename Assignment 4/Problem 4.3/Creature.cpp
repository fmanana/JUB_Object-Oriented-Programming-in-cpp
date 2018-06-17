#include <iostream>
#include "Creature.h"

using namespace std;

Creature::Creature(): distance(10){}

void Creature::run() const
{
    cout << "running " << distance << " meters!\n";
}

Wizard::Wizard() : distFactor(3){}

void Wizard::hover() const
{
    cout << "hovering " << (distFactor * distance) << " meters!\n";
}


Wizard::~Wizard()
{
    cout << "The wizard was unworthy\n";
}

Student::Student() : work(7) {}

void Student::stress()
{
    cout << "Student has stress level " << (work * distance) << endl;
}

Student::~Student()
{
    cout << "The student has dropped out\n";
}

Archer::Archer() : training(3) {}

void Archer::accuracy()
{
    cout << "Archer firing with accuracy " << (training * distance) << endl;
}

Archer::~Archer()
{
    cout << "The archer has been vanquished\n";
}
