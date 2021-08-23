// GameOfChips.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

// These variables are to use anywhere
const float MAX_TURNS = .5;  // Max turns to use
const int MAX_CHIPS = 100;    // Maximum Number of chips

int main()
{
    cout << "Game Of Chips!\n";
    cout << "--------------------------------";
    cout << "\nRules\n";

    // Calculate the chips on the pile for this round
    int chipsInPile = 0;
    // Seed the Random Generator with the current millis to avoid the pattern of random
    srand(time(0));
    chipsInPile = (rand() % MAX_CHIPS) + 1; 
    int CHIPS_PER_TURN = MAX_TURNS * chipsInPile;

    // Rules
    cout << "This round will start with " << chipsInPile << " chips in the pile.\n";
    cout << "You can take up to " << CHIPS_PER_TURN << " at a time.\n";


    // Array to store the player names
    string playerNames[2];
    // Ask the players for the names
    cout << "Player 1, Enter your Name: ";
    cin >> playerNames[0];
    cout << "\nPlayer 2, Enter your Name: ";
    cin >> playerNames[1];
    cout << endl;

    //Genereate the number of chips taken by the computer
    srand(time(0));
    int CompChips = rand() % CHIPS_PER_TURN + 1;

    cout << CompChips;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
