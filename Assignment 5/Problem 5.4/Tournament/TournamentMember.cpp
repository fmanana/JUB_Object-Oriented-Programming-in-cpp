/*
    CH08-320142
    a5 p4.cpp
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
    std::cout << endl;//readability

    std::cout << "By print method" << std::endl;
    std::cout << "Position: " << position << std::endl;
    std::cout << "Number: " << number << std::endl;
    std::cout << "Foot: " << foot << std::endl;
    std::cout << "Goals: " << goals << endl;
    std::cout << std::endl;
}

bool Referee::addToYellowCardList(Player *p)
{
    if(p == NULL)
    {
        return false;
    }

    for(int i = 0; i < this->yellowCardCount; i++)
    {
        if(this->yellowCardList[i] == p)
        {
            for(int j = i; j < this->yellowCardCount - 1; j++)
            {
                this->yellowCardList[j] = this->yellowCardList[j+1];
            }
            this->yellowCardCount--;
            addToRedCardList(p);
            std::cout << "Player added to red card list." << std::endl;
            return false;
        }
    }

    this->yellowCardList[this->yellowCardCount++] = p;

    return true;
}

bool Referee::addToRedCardList(Player *p)
{

    if(p == NULL)
    {
        return false;
    }

    this->redCardList[this->redCardCount++] = p;

    return true;
}

Referee::Referee() : TournamentMember()
{
    std::cout << "Referee constructor call." << std::endl;
    this->yellowCardCount = 0;
    this->redCardCount = 0;
    for(int i = 0; i < 50; i++)
    {
        this->yellowCardList[i] = NULL;
        this->redCardList[i] = NULL;
    }
}

Referee::~Referee()
{
    std::cout << "Referee destructor call." << std::endl;
}
