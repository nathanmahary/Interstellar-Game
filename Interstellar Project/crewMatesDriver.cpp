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


Resource Resources;
Inventory Inventorys;



int split(string inputString, char separator, string arr[], int size)
{
    int spot = 0;
    int numStrings = 0;
    int stringLength = inputString.length();
    string empty = "";
    
    if(inputString == "") // returns zero if the string is empty
    {      
        return 0;
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
    
    if(spot > size)
    {
        return -1;
    }
    else
    {
        return spot;
    }
    

}



int main()
{
    //cout << "Welcome to Interstellar" << endl;
    string line = "";
    //int counter = 0;
    int i = 0;
    string crewArr[10];
    string abilitesArr[10];
    string tempArr[2];
  
    
    ifstream fin;
    ofstream fout;
    fin.open("crewmates.txt");

    while(getline(fin,line))
    {
        split(line, ';', tempArr,2);
        
        crewArr[i] = tempArr[0];
        abilitesArr[i] = tempArr[1];

        i++;
        
    }

    cout << "Pick a crewmate to help you with your journey!" << endl;
    cout << endl;
    
    for(int i = 0; i < 10; i++)
    {
        cout << (i+1) << "." << crewArr[i] << endl;
        cout << "Ability: " << abilitesArr[i] << endl;
        cout << endl;
    }


    int choice;
    cin >> choice;

    switch(choice)
    {
        case 1: 
            cout << "Great choice! Lola will bring a lot to your team. Pick your last crewmate." << endl;
            for(int i = 0; i < 10; i++)
            {
                cout << (i+1) << "." << crewArr[i] << endl;
                cout << "Ability: " << abilitesArr[i] << endl;
                cout << endl;
            }

            cin >> choice;
        break;

        case 2:
            cout << "Great choice! Nerys will bring a lot to your team. Pick your last crewmate." << endl;
            for(int i = 0; i < 10; i++)
            {
                cout << (i+1) << "." << crewArr[i] << endl;
                cout << "Ability: " << abilitesArr[i] << endl;
                cout << endl;
            }
            cin >> choice;
        break;


        case 3:
            cout << "Great choice! Millie will bring a lot to your team. Pick your last crewmate." << endl;
            for(int i = 0; i < 10; i++)
            {
                cout << (i+1) << "." << crewArr[i] << endl;
                cout << "Ability: " << abilitesArr[i] << endl;
                cout << endl;
            }
            cin >> choice;
        break;


        case 4:
            cout << "Great choice! Chuck will bring a lot to your team. Pick your last crewmate." << endl;
            for(int i = 0; i < 10; i++)
            {
                cout << (i+1) << "." << crewArr[i] << endl;
                cout << "Ability: " << abilitesArr[i] << endl;
                cout << endl;
            }
            cin >> choice;
        break;

        case 5:
            cout << "Great choice! Mark will bring a lot to your team. Pick your last crewmate." << endl;
            for(int i = 0; i < 10; i++)
            {
                cout << (i+1) << "." << crewArr[i] << endl;
                cout << "Ability: " << abilitesArr[i] << endl;
                cout << endl;
            }
            cin >> choice;
        break;

        case 6:
            cout << "Great choice! Sherry will bring a lot to your team. Pick your last crewmate." << endl;
            for(int i = 0; i < 10; i++)
            {
                cout << (i+1) << "." << crewArr[i] << endl;
                cout << "Ability: " << abilitesArr[i] << endl;
                cout << endl;
            }
            cin >> choice;
        break;

        case 7:
            cout << "Great choice! Mary will bring a lot to your team. Pick your last crewmate." << endl;
            for(int i = 0; i < 10; i++)
            {
                cout << (i+1) << "." << crewArr[i] << endl;
                cout << "Ability: " << abilitesArr[i] << endl;
                cout << endl;
            }
            cin >> choice;
        break;

        case 8:
            cout << "Great choice! Bobby will bring a lot to your team. Pick your last crewmate." << endl;
            for(int i = 0; i < 10; i++)
            {
                cout << (i+1) << "." << crewArr[i] << endl;
                cout << "Ability: " << abilitesArr[i] << endl;
                cout << endl;
            }
            cin >> choice;
        break;

        case 9:
            cout << "Great choice! Nellie will bring a lot to your team. Pick your last crewmate." << endl;
            for(int i = 0; i < 10; i++)
            {
                cout << (i+1) << "." << crewArr[i] << endl;
                cout << "Ability: " << abilitesArr[i] << endl;
                cout << endl;
            }
            cin >> choice;
        break;

        case 10:
            cout << "Great choice! Walter will bring a lot to your team. Pick your last crewmate." << endl;
            for(int i = 0; i < 10; i++)
            {
                cout << (i+1) << "." << crewArr[i] << endl;
                cout << "Ability: " << abilitesArr[i] << endl;
                cout << endl;
            }
            cin >> choice;
        break;


         //cout << "You have a very impressive crew. With your leadership, you will be sure to succeed." << endl;

        default: //Invaild input
        cout << "Invalid input, please choice another vaild option." << endl;
    }

    cout << "You have a very impressive crew. With your leadership, you will be sure to succeed." << endl;

    
}