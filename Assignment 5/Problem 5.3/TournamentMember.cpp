/*
    CH08-320142
    a5 p3.cpp
    Fezile Manana
    f.manana@jacobs-university.de
*/

#include <cstring>
#include <iostream>
#include "TournamentMember.h"

using namespace std;

TournamentMember::TournamentMember()
{
    cout << "TournamentMember Constructor call." << endl;
}

TournamentMember::~TournamentMember()
{
    cout << "TournamentMember Destructor call." << endl;
}

Player::Player()
{
    std::cout << "Player Constructor call." << std::endl;
}

Player::~Player()
{
    std::cout << "Player Destructor call." << std::endl;
}

void Player::printp()
{
    std::cout << endl;
    std::cout << "By print method" << std::endl;
    std::cout << "Position: " << position << std::endl;
    std::cout << "Number: " << number << std::endl;
    std::cout << "Foot: " << foot << std::endl;
    std::cout << "Goals: " << goals << endl;
    std::cout << std::endl;
}
