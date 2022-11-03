// CSCI 1300 Spring 2022
// Author: Nathan Mahary and Robiel Kennedy
// Nathan Mahary Recitation: 205 – Alex Ray
// Robiel Kennedy Recitation: 204 - Varsha Srikanth Koushik
// Project 3
#include <iostream>
#include <string>
#include <fstream>
#ifndef crewMates.h
#define crewMates.h



using namespace std;

class Crew
{

    private:

    string name1;
    string abilities;

    public:

    Crew();
    Crew(string name1, string abilities1);

    //getters and setters
    
    string getName1e();
    void setPlanetName(string name1);

    int getAbilities();
    void setSize(int abilities1);
};
#endif
