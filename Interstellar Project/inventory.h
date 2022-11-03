// CSCI 1300 Spring 2022
// Author: Nathan Mahary and Robiel Kennedy
// Nathan Recitation: 205 – Alex Ray
// Robiel Recitation: 204 - Varsha Srikanth Koushik
// Project 3
#include <iostream>
#ifndef INVENTORY_H
#define INVENTORY_H

using namespace std;

class Inventory
{
    private:

    int translatorCount;
    int spaceSuitLevelCount;
    int medKitCount;
    int fuelCount;
    int lightSaberCount;
    int blasterCount;
    int beamCount;
    int weaponsCount;


    public:
    Inventory();
    Inventory(int translatorCount_, int spaceSuitLevelCount_, int medKitCount_, int fuelCount_, int lightSaberCount_, int blasterCount_, int beamCount_, int weaponsCount_);

    
     //getters and setters
    int getTranslatorCount();
    void setTranslatorCount(int translatorCount_);

    int getSpaceSuitLevelCount();
    void setSpaceSuitLevelCount(int spaceSuitLevelCount_);

    int getMedKitCount();
    void setMedKitCount(int medKitCount_);

    int getFuelCount();
    void setFuelCount(int fuelCount_);

    int getLightSaberCount();
    void setLightSaberCount(int lightSaberCount_);

    int getBlasterCount();
    void setBlasterCount(int BlasterCount_);

    int getBeamCount();
    void setBeamCount(int beamCount_);

    int getWeaponsCount();
    void setWeaponsCount(int weaponsCount_);

};
#endif