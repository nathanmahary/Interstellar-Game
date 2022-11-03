// CSCI 1300 Spring 2022
// Author: Nathan Mahary and Robiel Kennedy
// Nathan Recitation: 205 – Alex Ray
// Robiel Recitation: 204 - Varsha Srikanth Koushik
// Project 3
#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <vector>
#include "planets.h"
#include <string>
#include <iomanip>

using namespace std;

Planets::Planets()
{

    planetName == "";
    sizePlanet = 0;
    fuelRequired = 0;
    capacityPlanet = 0;
    currentFuel = 200000;

}

Planets::Planets(string planetName1, double sizePlanet1, int capacityPlanet1, int fuelRequired1, int currentFuel1)
{

    planetName = planetName1;
    sizePlanet = sizePlanet1;
    capacityPlanet = capacityPlanet1;
    fuelRequired = fuelRequired1;

}

string Planets::getPlanetName()
{
    return planetName;

}

double Planets::getSize()
{
    return sizePlanet;

    //return sizePlanet;
}

int Planets::getCapacity()
{
    //double capacityPlanet(double sizePlanet);

    return capacityPlanet;
}

int Planets::getFuelRequired()
{
    return fuelRequired;

}

void Planets::setPlanetName()
{
    // planetName = planetName1;
    // string randomName();

        string namePlanet;

        ifstream file;
        string line ="";
        int size =0;
        string FLW[3125];
        file.open("planetNames.txt");
        if(file.fail())
        {
            cout << "File failed to open." << endl;
            return;
        }
        while(getline(file, line))
        {
            if(line != "")
            {
                FLW[size] = line;
                size++;
            }
        }
        srand(time(NULL));
        int newrand = rand() % 3124;

        char c;
        string planetName2 = "";

            for(int i = 0; i < 6; i++)
            {
                int r = rand() % 26;
                if (r >= 0 && r < 10)
                {
                    r = r + 48;
                    c = r;
                }
                else if (r > 0 && r < 26)
                {
                    r = r + 65;
                    c = r;

                }

                planetName2 = planetName2 + c;
            }
        
        // cout << planetName << " - " << FLW[newrand] << endl;
        namePlanet = planetName2 + "-" + FLW[newrand];

        planetName = namePlanet;
        //return namePlanet;
}

void Planets::setSize()
{
    // sizePlanet = sizePlanet1;
    double arr[15] ={1, 1.5, 2, 2.5, 3, 3.5, 4, 4.5, 5, 5.5, 6, 6.5, 7, 7.5, 8};

    int randDistance = rand() % 15;
    double sizePlanet2 = arr[randDistance] * 1000;
    sizePlanet = sizePlanet2;
}

void Planets::setCapacity()
{
    int capacityPlanet2 = 0;
    capacityPlanet2 = sizePlanet * 615;
    capacityPlanet = capacityPlanet2;
}

void Planets::setFuelRequired(int fuelRequired1, int currentFuel)
{
    fuelRequired = fuelRequired1;
    double nextFuel = 0;

    nextFuel = currentFuel * currentFuel/1000000 + currentFuel;
    // make nextFuel the new currentFuel

    return;
}

