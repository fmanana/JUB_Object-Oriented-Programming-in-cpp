#include <iostream>

class City
{
private:
    std::string name;
    std::string poi;
    std::string location;
    int inhabitants;

public:
    void setName(std::string n);
    void setPOI(std::string p);
    void setLocation(std::string l);
    void setInhabitants(int i);

    std::string getName();
    std::string getPOI();
    std::string getLocation();
    int getInhabitants();

    void print();

};

