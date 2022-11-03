// CSCI 1300 Spring 2022
// Author: Nathan Mahary and Robiel Kennedy
// Nathan Recitation: 205 – Alex Ray
// Robiel Recitation: 204 - Varsha Srikanth Koushik
// Project 3
#include <iostream>
#include <string>
#include <fstream>
#ifndef PLANETS_H
#define PLANETS_H

using namespace std;



class Planets{

    private:

    string planetName;
    double sizePlanet;
    int fuelRequired;
    double capacityPlanet;
    int currentFuel;

    public:

    Planets();
    Planets(string planetName1, double sizePlanet1, int capacityPlanet1, int fuelRequired1, int currentFuel1);

    
     //getters and setters
    string getPlanetName();
    void setPlanetName();

    double getSize();
    void setSize();

    int getFuelRequired();
    void setFuelRequired(int fuelRequired1, int currentFuel);

    int getCapacity();
    void setCapacity();
};
#endif