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
                cout << "Your spacesuit is now a grade 4." << endl;
                Resources.setSpaceSuit(input1);
                cout << "You have $" << Resources.getCash() << " left." << endl;
                break;

            case 5:
                cout << "4. Go back to Menu" << endl;
                break;
        }
    return;
}

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

int main()
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

        while(input1 !=6)
        {
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
                        // cout << "Go back to Menu" << endl;
                        break;
                    default:
                        cout << "Re-enter a valid option" << endl;
                        break;
                }
            break;
        }
        
    } while (true );
}