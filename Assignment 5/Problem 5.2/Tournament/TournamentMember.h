/*
    CH08-320142
    a5 p2.cpp
    Fezile Manana
    f.manana@jacobs-university.de
*/

#include <iostream>
#include <cstring>
class TournamentMember
{
    private:
        char firstname[31];
        char lastname[31];
        char DOB[11];
        double height;
        double weight;
        static std::string location;

    public:
        TournamentMember();
        ~TournamentMember();
        TournamentMember(const TournamentMember&);

        void print();
        //Setters
        void setFirstname(const std::string& f){strcpy(firstname, f.c_str());}
        void setLastname(const std::string& l){strcpy(lastname, l.c_str());}
        void setDOB(const std::string& d){strcpy(DOB, d.c_str());}
        void setWeight(double w){weight = w;}
        void setHeight(double h){height = h;}
        //Getters
        const std::string getFirstname(){return firstname;}
        const std::string getLastname(){return lastname;}
        char* getDOB(){return DOB;}
        double getWeight(){return weight;}
        double getHeight(){return height;}
};
