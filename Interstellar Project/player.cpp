// CSCI 1300 Spring 2022
// Author: Nathan Mahary and Robiel Kennedy
// Nathan Recitation: 205 – Alex Ray
// Robiel Recitation: 204 - Varsha Srikanth Koushik
// Project 3
#include "player.h"
#include <iostream>

using namespace std;

Player::Player()
{

    playerName = "";
    rank = "";
    crewMate1 = "";
    crewMate2 = "";
    health == 100;

}

Player::Player(string rank1, string playerName1, string crewMate1_1, string crewMate2_2, int health1)
{

    playerName = playerName1;
    rank = rank1;
    crewMate1 = crewMate1_1;
    crewMate2 = crewMate2_2;
    health == health1;

}

string Player::getPlayerName()
{
    return playerName;

}

string Player::getRank()
{
    return rank;

}

string Player::getCrewMate1()
{
    return crewMate1;

}

string Player::getCrewMate2()
{
    return crewMate2;

}

int Player::getHealth()
{
    return health;

}

void Player::setRank(string rank1){

    rank = rank1;

}

void Player::setPlayerName(string playerName1){

    playerName = playerName1;

}

void Player::setCrewMate1(string crewMate1_1){

    crewMate1 = crewMate1_1;

}

void Player::setCrewMate2(string crewMate2_2){

    crewMate2 = crewMate2_2;

}

void Player::setHealth(int health1){

    health = health1;
    

}