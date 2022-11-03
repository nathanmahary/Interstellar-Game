// CSCI 1300 Spring 2022
// Author: Nathan Mahary and Robiel Kennedy
// Nathan Recitation: 205 – Alex Ray
// Robiel Recitation: 204 - Varsha Srikanth Koushik
// Project 3
#include <iostream>
#include <string>
#include <fstream>
#ifndef PLAYER_H
#define PLAYER_H

using namespace std;

class Player{

    private:

    string rank;
    string crewMate1;
    string crewMate2;
    string playerName;
    int health;

    public:

    Player();
    Player(string rank1, string playerName1, string crewMate1_1, string crewMate2_2, int health1);

    
     //getters and setters
    string getRank();
    void setRank(string rank1);

    string getPlayerName();
    void setPlayerName(string playerName1);

    string getCrewMate1();
    void setCrewMate1(string crewMate1_1);

    string getCrewMate2();
    void setCrewMate2(string crewMate2_2);

    int getHealth();
    void setHealth(int health1);
};

#endif