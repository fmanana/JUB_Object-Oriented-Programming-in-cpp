#include <iostream>

class Creature {
	public:
		Creature();
		void run() const;

	protected:
		int distance;
};

class Wizard : public Creature {
	public:
		Wizard();
		void hover() const;
		~Wizard();

	private:
		int distFactor;
};

class Student : public Creature
{
    public:
        Student();
        void stress();
        ~Student();

    private:
        int work;
};

class Archer : public Creature
{
    public:
        Archer();
        void accuracy();
        ~Archer();

    private:
        int training;
};
