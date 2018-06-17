/*
    CH08-320142
    a5 p4.cpp
    Fezile Manana
    f.manana@jacobs-university.de
*/

#include <iostream>
#include "TournamentMember.h"

using namespace std;
std::string TournamentMember::location = "Bremen";

int main()
{
    Player a, b, c;//Creating players

    a.increaseGoals();
    a.setFirstname("Robin");
    a.setLastname("Williams");
    a.setNumber(14);
    a.setPosition("Defender");
    a.setFoot("left");

    b.setFirstname("Michael");
    b.setLastname("Jackson");
    b.setNumber(12);
    b.setPosition("Goal Keeper");
    b.setFoot("Right");

    c.increaseGoals();
    c.increaseGoals();
    c.setFirstname("Mom's");
    c.setLastname("Spaghetti");
    c.setNumber(07);
    c.setPosition("Striker");
    c.setFoot("Right");

    Player *players[3];
    players[0] = a;
    players[1] = b;
    players[2] = c;

    Referee MansNotHot; //Creating referee

    MansNotHot.addToYellowCardList(players[0]);
    //adding random player to yellow card list
    MansNotHot.addToYellowCardList(players[0]);
    //player should now be in red card list
    MansNotHot.addToRedCardList(players[1]);
    MansNotHot.addToYellowCardList(players[2]);



    return 0;
}
