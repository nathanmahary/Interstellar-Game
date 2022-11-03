// CSCI 1300 Spring 2022
// Author: Nathan Mahary and Robiel Kennedy
// Nathan Recitation: 205 – Alex Ray
// Robiel Recitation: 204 - Varsha Srikanth Koushik
// Project 3
#include <iostream>
#include "Inventory.h"
#include "resources.h"

using namespace std;

Resource Resources;

Inventory::Inventory()
{
    translatorCount = 0; 
    spaceSuitLevelCount = 1;
    medKitCount = 0;
    fuelCount = 200000;
    lightSaberCount = 1;
    blasterCount = 0;
    beamCount= 0;
    weaponsCount = 0;
}
Inventory::Inventory(int translatorCount_, int spaceSuitLevelCount_, int medKitCount_, int fuelCount_, int lightSaberCount_, int blasterCount_, int beamCount_, int weaponsCount_)
{
    translatorCount = translatorCount_; 
    spaceSuitLevelCount = spaceSuitLevelCount_;
    medKitCount = medKitCount_;
    fuelCount = fuelCount_;
    lightSaberCount = lightSaberCount_;
    blasterCount = blasterCount_;
    beamCount= beamCount_;
    weaponsCount = weaponsCount_;
}

int Inventory::getFuelCount()
{
    return fuelCount;
}
void Inventory:: setFuelCount(int fuelCount_)
{
    fuelCount = fuelCount_;
}

int Inventory::getTranslatorCount()
{
    return translatorCount;
}
void Inventory::setTranslatorCount(int translatorCount_)
{
    translatorCount =  translatorCount_;
}

int Inventory::getSpaceSuitLevelCount()
{
    return spaceSuitLevelCount;
}
void Inventory::setSpaceSuitLevelCount(int spaceSuitLevelCount_)
{
    spaceSuitLevelCount = spaceSuitLevelCount_;
}

int Inventory::getMedKitCount()
{
    return medKitCount;
}
void Inventory::setMedKitCount(int medKitCount_)
{
    medKitCount = medKitCount_;
}
int Inventory::getLightSaberCount()
{
    return lightSaberCount;
}
void Inventory::setLightSaberCount(int lightSaberCount_)
{
    lightSaberCount = lightSaberCount_;
    lightSaberCount = Resources.getLightSaber();
}
int Inventory::getBlasterCount()
{
    return blasterCount;
}
void Inventory::setBlasterCount(int blasterCount_)
{
    blasterCount = blasterCount_;
    blasterCount = Resources.getBlaster();
}
int Inventory::getBeamCount()
{
    return beamCount;
}
void Inventory::setBeamCount(int beamCount_)
{
    beamCount = beamCount_;
    beamCount = Resources.getBeam();

}
int Inventory::getWeaponsCount()
{
    return weaponsCount;
}
void Inventory::setWeaponsCount(int weaponsCount_)
{
    weaponsCount = weaponsCount_;
    // weaponsCount = beamCount + lightSaberCount + blasterCount;
}





