/*
    CH08-320142
    a4_p2.cpp
    Fezile Manana
    f.manana@jacobs-university.de
*/

#include <iostream>

using namespace std;

class Creature {
	public:
		Creature();
		void run() const;

	protected:
		int distance;
};

Creature::Creature(): distance(10)
{}

void Creature::run() const
{
    cout << "running " << distance << " meters!\n";
}

class Wizard : public Creature {
	public:
		Wizard();
		void hover() const;
		~Wizard();

	private:
		int distFactor;
};

Wizard::Wizard() : distFactor(3){}

void Wizard::hover() const
{
    cout << "hovering " << (distFactor * distance) << " meters!\n";
}

Wizard::~Wizard()
{
    cout << "The wizard was unworthy\n";
}

class Student : public Creature
{
    public:
        Student();
        void stress();
        ~Student();

    private:
        int work;
};

Student::Student() : work(7) {}

void Student::stress()
{
    cout << "Student has stress level " << (work * distance) << endl;
}

Student::~Student()
{
    cout << "The student has dropped out\n";
}

class Archer : public Creature
{
    public:
        Archer();
        void accuracy();
        ~Archer();

    private:
        int training;
};

Archer::Archer() : training(3) {}

void Archer::accuracy()
{
    cout << "Archer firing with accuracy " << (training * distance) << endl;
}

Archer::~Archer()
{
    cout << "The archer has been vanquished\n";
}

int main()
{
    cout << "Creating an Creature.\n";
    Creature c;
    c.run();

    cout << "\nCreating a Wizard.\n";
    Wizard w;
    w.run();
    w.hover();

    cout << "\nCreating Student.\n";
    Student s;
    s.run();
    s.stress();

    cout << "\nCreating Archer.\n";
    Archer a;
    a.run();
    a.accuracy();

    cout << endl;
    // Readability for destruction

    return 0;
}
