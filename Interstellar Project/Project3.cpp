// CSCI 1300 Spring 2022
// Author: Nathan Mahary and Robiel Kennedy
// Nathan Recitation: 205 – Alex Ray
// Robiel Recitation: 204 - Varsha Srikanth Koushik
// Project 3
#include "resources.h"  
#include <vector>
#include <iostream>
#include <string>
#include <cstdlib>
#include <fstream>
#include <iomanip>
#include "inventory.h"
#include "player.h"
#include "map.h"
#include "planets.h"

using namespace std;

void weapons(int input1, Resource &Resources, Inventory &Inventorys)
{
    int tempWeapons;
    
    if (Inventorys.getWeaponsCount() > 3)
    {
        cout << "You cannot have more than two weapons at the same time, re-enter a valid quantity." << endl;
        return;
    }
        cout << "Which weapon type do you wish to buy?" << endl;
        cout << "1. Light Saber" << endl;
        cout << "2. Blaster" << endl;
        cout << "3. Beam Gun" << endl;
        cout << "4. Go back to Menu" << endl;
        cin >> input1;

        switch (input1)
        {
            case 1:
                cout << "How many Light Sabers do you wish to buy ($1,000 each)?" << endl;
                cin >> input1;
                tempWeapons= Inventorys.getWeaponsCount() + input1;

                while (true)
                {
                    if(tempWeapons > 0 && tempWeapons < 3)
                    {   
                        Resources.setWeapons(1, input1);
                        // cout << Resources.getLightSaber() << endl;
                        cout << "You have $" << Resources.getCash() << " left." << endl;
                        Inventorys.setWeaponsCount(tempWeapons);
                        break;
                    }
                    else
                    {
                        cout << "You cannot have more than two weapons at the same time, re-enter a valid quantity." << endl;
                        cin >> input1;
                        break;
                    }

                }
                break;

            case 2:
                cout << "How many Blasters do you wish to buy ($2,000 each)?" << endl;
                cin >> input1;
                tempWeapons = Inventorys.getWeaponsCount() + input1;
                cout << tempWeapons << endl;
                while (true)
                {
                    if(tempWeapons > 0 && tempWeapons < 3)
                    {   
                        Resources.setWeapons(2, input1);
                        // cout << Resources.getLightSaber() << endl;
                        cout << "You have $" << Resources.getCash() << " left." << endl;
                        Inventorys.setWeaponsCount(tempWeapons);
                        break;
                    }
                    else
                    {
                        cout << "You cannot have more than two weapons at the same time, re-enter a valid quantity." << endl;
                        // cin >> input1;
                        break;
                    }
                }
                break;

            case 3:
                cout << "How many Beam Guns do you wish to buy ($5,000 each)?" << endl;
                cin >> input1;
                tempWeapons= Inventorys.getWeaponsCount() + input1;
                
                while (true)
                {
                    if(tempWeapons > 0 && tempWeapons < 3)
                    {   
                        Resources.setWeapons(3, input1);
                        // cout << Resources.getLightSaber() << endl;
                        cout << "You have $" << Resources.getCash() << " left." << endl;
                        Inventorys.setWeaponsCount(tempWeapons);
                        break;
                    }
                    else
                    {
                        cout << "You cannot have more than two weapons at the same time, re-enter a valid quantity." << endl;
                        cin >> input1;
                        break;
                    }
                }
                break;

            case 4:
                cout << "4. Go back to Menu" << endl;
                break;
        }
    return;
}

void translator(int input1, Resource &Resources)
{
    cout << "Would you like to purchase a translator device ($5,000)? 1 for yes, 0 for no." << endl;
    cin >> input1;

    cout << input1 << endl;
    Resources.setTranslator(input1);
    cout << Resources.getCash() << endl;

    return;

}

void suits(int input1)
{
    Resource Resources;

        cout << "Would you like to upgrade your spacesuit to any of these? The space suit health will be set to 100%." << endl;
        cout << "1. Space suit grade 2 is $5,000" << endl;
        cout << "2. Space suit grade 3 is $10,000" << endl;
        cout << "3. Space suit grade 4 is $15,000" << endl;
        cout << "4. Space suit grade 5 is $20,000" << endl;

        cin >> input1;

        switch (input1)
        {
            case 1:
                
                cout << "Your spacesuit is now a grade 2." << endl;
                Resources.setSpaceSuit(input1);
                cout << "You have $" << Resources.getCash() << " left." << endl;
                break;

            case 2:
                cout << "Your spacesuit is now a grade 3." << endl;
                Resources.setSpaceSuit(input1);
                cout << "You have $" << Resources.getCash() << " left." << endl;
                break;

            case 3:
                cout << "Your spacesuit is now a grade 4." << endl;
                Resources.setSpaceSuit(input1);
                cout << "You have $" << Resources.getCash() << " left." << endl;
                break;
            case 4:
                cout << "Your spacesuit is now a grade 5." << endl;
                Resources.setSpaceSuit(input1);
                cout << "You have $" << Resources.getCash() << " left." << endl;
                break;

            case 5:
                cout << "4. Go back to Menu" << endl;
                break;
        }
    return;
}

/**
 * Algorithm: This function returns the amount of medkits bought and the amount the player gets
 * 1. Accepts inputed number of medkits needed 
 * 2. The function checks if the player has 5 medkits already and allows the player to buy more if the medkie amount is less than 5
 * Parameters: int input1
 * Returns: Nothing (returns a cout statement due to void return type)
 */


void medKits(int input1)
{
    Resource Resources;
    int healthPoints;

    cout << "How many medical kits would you like to purchase ($2,000 each)? You currently have 0, and can at most have 5." << endl;
    cin >> input1;

    if(healthPoints < 60)
    {
        //apply med kit ot playyers health
    }
    else
    {
        while(true)
        {
            if(input1 <= 5)
            {
                Resources.setMedKits(input1);
                //Health calculation
            }
            else
            {
                cout << "You cannot have more than 5 kits. Re-enter a valid quantity." << endl;
                cin >> input1;
            }
        }
    }
}


/**
 * Algorithm: This function prints out the amount of fuel 
 * 1. Accepts inputed a fuelOption from the player
 * 2. User spends money on gas by increments of 10000s
 * Parameters: int fuelOption
 * Returns: Nothing (cout statement due to void return type)
 */


void spaceFuel(int fuelOption)
{
    Resource Resources;
    Inventory Inventorys;
    while (true)
    {
        if(fuelOption % 10000 == 0)
        {   
            Resources.setFuel(fuelOption);
            cout << "You have $" << Resources.getCash() << " left." << endl;
            int fuelCount = Inventorys.getFuelCount() + Resources.getFuel();
            cout << "You have " << fuelCount << " gallons of fuel" << endl;
            break;
        }
        else
        {
            cout << "Input must be in multiples of 10000s. Re-enter a valid quantity." << endl;
            cin >> fuelOption;
        }
    }
}

/**
 * Algorithm: This function splits a string into smaller string and stores them in an array
 * 1. Accepts inputed string, the separator, the array of the string and the size of the array which is getting passed into the function
 * 2. The function splits everything there is a delimiter in the string
 * Parameters: string inputString, char separator, string arr[], and int size
 * Returns: The number of strings the orginal string was split into
 */


void split(string inputString, char separator, string arr[], int size)
{
    // int originally
    int spot = 0;
    int numStrings = 0;
    int stringLength = inputString.length();
    string empty = "";
    
    if(inputString == "") // returns zero if the string is empty
    {      
        return; // 0
    }

    else
    {
        inputString += separator;
        
        for(int i = 0; i < inputString.length(); i++)  // iterates through the loop
        { 
            if(inputString[i] != separator)  // if the size of the array is not big enough then return -1
            {    
                empty += inputString[i];
            }
            else
            {
                if(inputString[i + 1] == separator)  // if the index of the string is equal to the seperator then it makesa new string for the array
                {    
                    continue;
                } 
                if(empty != "")
                {
                    arr[spot] = empty;
                    spot++;
                    empty = "";
                }
            }
            
        }
    }
}



int main()
{   
    Player Players;
    Map Maps;
    Planets Planets;

    string playerName;
    string rank;
    string enter;
    int input1;
    int input2;
    char input3;
    char questionAnswer;
    int totalHealth = Players.getHealth();


    cout << "-----------Interstellar The Game----------" << endl;
    cout << "This is a fun adventorous game modeled after the movie 'Interstellar'" << endl;
    cout << "What is your Name? " << endl;
    getline(cin, playerName);
    // cin >> playerName;
    Players.setPlayerName(playerName);
    cout << "What is your rank? (Commander or Pilot)" << endl;
    getline(cin, rank);
    // cin >> rank;
    Players.setRank(rank);

    cout << "" << endl;

    cout << "Welcome " << Players.getRank() << " " << Players.getPlayerName() << " to Interstellar" << endl; // name
    cout << "Press ENTER to continue" << endl;
    getline(cin, enter);

    // put crewMate here

    cout << "Let's Start by Traveling to the First Planet" << endl;
    cout << "Press ENTER to receive the first Planet's info" << endl;
    getline(cin, enter);
    Planets.setPlanetName();
    cout << "The planet's name is " << Planets.getPlanetName() << endl;
    Planets.setSize();
    cout << "The diameter of the planet is " << Planets.getSize() << " kms" << endl;
    Planets.setCapacity();
    cout << "The capacity of the Planet is " << Planets.getCapacity() << " million" << endl;
    string firstPlanet1 = Planets.getPlanetName();

    getline(cin, enter);

   

    cout << "WEAPONS. If your weapon breaks or if you lose your weapon during an event, you may need additional weapons to defend yourself!" << endl;
    cout << "TRANSLATOR. Allows you to communicate with friendly aliens to get their assessment of the planet and increases odds of winning against a hostile alien." << endl;
    cout << "SPACE SUIT. The better the spacesuit, the more durable and protective you will be during the mission and an alien attack." << endl;
    cout << "MEDICAL KITS. The more kits you have, the more times you can revive your health by 40%." << endl;
    cout << "FUEL. Fuel is an essential element for the spacecraft to travel to more planets." << endl;
    cout << "" << endl;
    cout << "You can spend all of your money here before you start your journey, or you can save some to spend on different resources along the way. You will also gain money for each turn as you move through the game." << endl;
    cout << "" << endl;
    cout << "Hit enter when you have understood." << endl;
    getline(cin, enter);

            
    cout << Planets.getPlanetName() << endl;
    Maps.spawnSite(10,3,6); 
    Maps.spawnSite(7,2,4);
    Maps.spawnSite(2,8,1);
    Maps.spawnNPC(4,4);
    Maps.displayMap();
    int playerPosition = Maps.getPlayerColPosition() + Maps.getPlayerRowPosition();
do
    {
        cout << " Select one:" << endl;
        cout << "1. Move" << endl;
        cout << "2. View status" << endl;
        cout << "3. View log book" << endl;
        cout << "4. Resource center" << endl;
        cout << "5. Report planet as habitable" << endl;
        cout << "6. Enter wormhole to next planet" << endl;
        cout << "7. Give up" << endl;

        cin >> input2;
            
        switch(input2)
        {
            case 1:
                Maps.displayMap();
                cout << "Select one: w. up s. down d. right a. left m. menu" << endl;
                cin >> input3;
                while (input3 != 'm')
                {
                    if (input3 == 'w')
                    {
                        Maps.executeMove('w');
                        Maps.displayMap();
                    }
                    else if (input3 == 's')
                    {
                        Maps.executeMove('s');
                        Maps.displayMap();
                    }
                    else if (input3 == 'd')
                    {
                        Maps.executeMove('d');
                        Maps.displayMap();
                    }
                    else if (input3 == 'a')
                    {
                        Maps.executeMove('a');
                        Maps.displayMap();
                    }
                    /*else if (input3 = 'm')
                    {
                        break;
                    }*/
                    else if (playerPosition = Maps.spawnSite(2,8,1))
                    {
                        cout << "Good job, you have found a site that may have some useful information about this planet. If you get this question right, the information will be revealed. If you answer incorrectly though, you’ll become more frustrated and lose 1% health due to stress." << endl;
                        cout << "What type of star is The Sun?" << endl;
                        cout << "a. red giant" << endl;
                        cout << "b. yellow dwarf" << endl;
                        cout << "c. white dwarf" << endl;
                        cout << "d. supergiant" << endl;
                        cin >> questionAnswer;
                        if (questionAnswer = 'd')
                        {
                            cout << "Correct answer!" << endl;
                            cout << "You just discovered that this planet has water. This is a great sign. This discovery has been added to your log book." << endl;
                        }
                        else
                        {
                            cout << "Incorrect answer! Reduced your health by 1% because of frustration." << endl;
                            totalHealth = Players.getHealth() - 1;
                        }

                    }
                    else
                    {
                        cout << "Invalid Option" << endl;
                    }
                  
                    cin >> input3;
                }
                break;


            case 2:
                cout << "Health: " <<endl;
                cout << "____________________ 100%" << endl;
                cout << "Space Suit Health: " << endl;
                cout << "____________________ 100%" << endl;
                cout << "Fuel tank:" << endl;
                cout <<"________________      75%" << endl;
                break;
            case 3:
                getline(cin, enter);
                cout << Players.getRank() << " " << Players.getPlayerName() << "s: " << firstPlanet1 << endl;
                cout << "Planet size (in diameter of 1000 kms): " << Planets.getSize()/1000 << endl;
                cout << "Planet carraynig capacity (in millions): " << Planets.getCapacity() << endl;
                cout << "Habitable traits discovered: " << endl; // include water or something like that
                cout << "Non-habitable traits discovered: " << endl; // toxic or bad
                cout << "Friendly alien assessment: " << endl; // habitable or not
                break;

            case 4:

                while(true)
                {
                    do
                    {
                        int input;

                        cout << "Which item do you wish to buy?" << endl;
                        
                        cout << "1. Weapon" << endl;
                        cout << "2. Translator" << endl;
                        cout << "3. Space Suit" << endl;
                        cout << "4. Medical Kits" << endl;
                        cout << "5. Fuel" << endl;
                        cout << "6. Go back to Menu" << endl;
                        
                        // cin >> input;

                        Resource Resources;
                        Inventory Inventorys;

                        int input1;
                        int fuelOption;

                        int weaponsCount = Inventorys.getWeaponsCount();
                        
                        cin >> input;

                        switch (input)
                            {
                                case 1:
                                    
                                    while (weaponsCount < 3)
                                    {
                                        weapons(input1, Resources, Inventorys);
                                        weaponsCount++;

                                        if (weaponsCount > 2)
                                        {
                                            cout << "You cannot have more than two weapons at the same time, re-enter a valid quantity." << endl;
                                            break;
                                        }
                                        break;
                                    }

                                    break;

                                case 2:
                                    //while (input == 2)
                                    //{
                                    translator(input1, Resources);
                                    //}

                                    break;

                                case 3:
                                    // cout << "3. Space Suit" << endl;
                                    suits(input1);
                                    break;

                                case 4:
                                    cout << "4. Medical Suit" << endl;
                                    break;

                                case 5:
                                    cout << "5. Fuel" << endl;
                                    cout << "You have " << Inventorys.getFuelCount() << " gallons of fuel. Your spacecraft can hold 400k gallons of fuel. How many gallons would you like to purchase ($1,000 per 10,000 gallons)? Input must be in multiples of 10000s." << endl;
                                    cin >> input1;

                                    spaceFuel(fuelOption);
                                    break;
                                case 6:
                                    cout << "Go back to Menu" << endl;
                                    break;
                                default:
                                    cout << "Re-enter a valid option" << endl;
                                    break;
                            }
                        
                    } while (input1 < 0 ||  "" );
                }
                break;

            case 5:
                cout << "space" << endl;
                break;
            case 6:
                cout << "space" << endl;
                break;
            case 7:
                cout << "space" << endl;
                break;

            default:
                cout << "Re-enter a valid option" << endl;
                break;
            break;
        }
        
    }while (true);
}