/*
    CH08-320142
    a5 p4.cpp
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
        void setFirstname(const std::string& f){strcpy(firstname, f.c_str());};
        void setLastname(const std::string& l){strcpy(lastname, l.c_str());};
        void setDOB(const std::string& d){strcpy(DOB, d.c_str());};
        void setWeight(double w){weight = w;};
        void setHeight(double h){height = h;};

        //Getters
        const std::string getFirstname(){return firstname;};
        const std::string getLastname(){return lastname;};
        char* getDOB(){return DOB;};
        double getWeight(){return weight;};
        double getHeight(){return height;};
};

class Player : public TournamentMember
{
    private:
        int number;
        int goals = 0;
        std::string position;
        std::string foot;

    public:
        Player();
        Player(const std::string& p, int n, int g){};
        Player(const Player&);
        ~Player();

        //setters
        void setNumber(int n) {number = n;};
        void setPosition(const std::string& p) {position = p;};
        void setFoot(const std::string& x){foot = x;};

        //Getters
        int getNumber() {return number;};
        std::string getPosition() {return position;};
        std::string getFoot(){return foot;};

        //Service methods
        void printp();
        void increaseGoals(){goals += 1;};
};

class Referee : public TournamentMember
{
    private:
        int yellowCardCount;
        Player *yellowCardList[50];
        int redCardCount;
        Player *redCardList[50];

    public:
        Referee();
        Referee(const Referee&);
        ~Referee();

        bool addToYellowCardList(Player *p);
        bool addToRedCardList(Player *p);

};
