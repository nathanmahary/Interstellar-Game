// CSCI 1300 Spring 2022
// Author: Nathan Mahary and Robiel Kennedy
// Nathan Recitation: 205 – Alex Ray
// Robiel Recitation: 204 - Varsha Srikanth Koushik
// Project 3
#include "resources.h"   
// #include "player.h"
#include "inventory.h"
#include <vector>
#include <iostream>
#include <string>

using namespace std;
Inventory Inventorys;


Resource::Resource()
{
    weapons = 0;
    translator = 0;
    spaceSuit = 0;
    medKits = 0;
    fuel = 0;
    weaponsAmount = 0;
    lightSaber = 1;
    blaster = 0;
    beam = 0;
    cash = 100000;
}
Resource::Resource(int weaponsOption, int translatorOption, int spaceSuitOption, int medKitOption, int fuelOption, int cashes, int lightSabers, int blasters, int beams, int input1)
{
    weapons = weaponsOption;
    translator =translatorOption;
    spaceSuit = spaceSuitOption;
    medKits = medKitOption;
    fuel = fuelOption;
    cash = cashes;
    lightSaber = lightSabers;
    blaster = blasters;
    beam = beams;
    weaponsAmount = input1;

}

int Resource:: getWeapons()
{
    return weapons;
}
int Resource:: getBlaster()
{
    return blaster;
}
int Resource:: getLightSaber()
{
    return lightSaber;
}
int Resource:: getBeam()
{
    return beam;
}
int Resource:: getCash()
{
    return cash;
}
void Resource:: setWeapons(int weaponsOption, int input1) // int lightSaber, int beam, int blaster)
{
    weapons = weaponsOption;
    weaponsAmount = input1;
    
    // int cash = 100000;
    int cash1 = 0;
    int cash2 = 0;
    int cash3 = 0;


    if(weapons == 1)
    {
        cash1 = 1000 * weaponsAmount;
        lightSaber = lightSaber + (weaponsAmount * 1);
        // lightSaber++;
        // cout << lightSaber << endl;
    }
    else if (weapons == 3)
    {
        cash2 = 5000 * weaponsAmount;
        beam = weaponsAmount * 1;
        // beam++;
    }
    else if (weapons == 2)
    {
        cash3 = 2000 * weaponsAmount;
        blaster = weaponsAmount * 1;
        // blaster++;
    }
    else
    {
        cout << "Incorrect option";
    }
    lightSaber = lightSaber;
    blaster = blaster;
    beam = beam;
    cash = cash - (cash1 + cash2 + cash3);
}

int Resource:: getTranslator()
{
    return translator;
}
void Resource :: setTranslator(int input1)
{
    // translator = translatorOption;
    if (input1 == 1)
    {
        cash = cash - 5000;
        translator++;
    }

}

int Resource:: getSpaceSuit()
{
    return spaceSuit;
}
void Resource :: setSpaceSuit(int input1)
{
    // spaceSuit = spaceSuitOption;

    int spaceSuit2;
    int spaceSuit3;
    int spaceSuit4;
    int spaceSuit5;
    if (input1 == 1)
    {
        cash = cash - 5000;
    }
    else if (input1 == 2)
    {
        cash = cash - 10000;
        // beam++;
    }
    else if (input1 == 3)
    {
        cash = cash - 15000;
        // blaster++;
    }
    else if (input1 == 4)
    {
        cash = cash - 20000;
    }
    
}

int Resource :: getMedKits()
{
    return medKits;
}
void Resource :: setMedKits(int input1)
{
    // medKits = medKitOption;
    if (input1 <= 5)
    {
        cash = cash - (2000 * input1);
    }
}

int Resource :: getFuel()
{
    return fuel;
}
void Resource :: setFuel(int fuelOption)
{
    fuel = fuelOption;
    if (fuelOption % 10000 == 0)
    {
        int fuelCount = fuel + Inventorys.getFuelCount();
        Inventorys.setFuelCount(fuelCount);
        cash = cash - (fuelOption/10);
    }
}

