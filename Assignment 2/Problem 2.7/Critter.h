#include <string> // defines standard C++ string class

/* First C++ class */
class Critter
{
private:  // data members are private
	std::string name;
	int hunger;
	int boredom;
	int anger;
	int stress;
	double height;

public: // business logic methods are public
	// setter methods
	void setName(std::string& newname);
	void setHunger(int newhunger);
	void setBoredom(int newboredom);
	void setStress(int newstress);
	void setAnger(int newanger);
	// new setter methods are private
	// getter method
	int getHunger();
	// service method
	void print();
};
