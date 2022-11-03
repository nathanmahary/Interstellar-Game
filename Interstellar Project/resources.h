// CSCI 1300 Spring 2022
// Author: Nathan Mahary and Robiel Kennedy
// Nathan Recitation: 205 – Alex Ray
// Robiel Recitation: 204 - Varsha Srikanth Koushik
// Project 3
#include <iostream>
#include <string>
#include <vector>
// #include "player.h"
#ifndef RESOURCES_H
#define RESOURCES_H

using namespace std;

class Resource
{
private:
    int weapons;
    int translator;
    int spaceSuit;
    int medKits;
    int fuel;
    int cash;
    int lightSaber;
    int blaster;
    int beam;
    int weaponsAmount;

public:
    Resource();
    Resource(int weaponsOption, int translatorOption, int spaceSuitOption, int medKitOption, int fuelOption, int cashes, int lightSabers, int blasters, int beams, int input1);

    
     //getters and setters
    int getWeapons();
    void setWeapons(int weaponsOption, int input1);

    int getTranslator();
    void setTranslator(int input1);

    int getSpaceSuit();
    void setSpaceSuit(int input1);

    int getMedKits();
    void setMedKits(int input1);

    int getFuel();
    void setFuel(int fuelOption);

    int getCash();
    void setCash(int cashes);

    int getBlaster();
    int getLightSaber();
    int getBeam();

};
#endif
