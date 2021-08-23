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

    // Array to store the player names
    string playerNames[2];
    // Ask the players for the names
    cout << "Player 1, Enter your Name: ";
    cin >> playerNames[0];
    cout << "\nPlayer 2, Enter your Name: ";
    cin >> playerNames[1];
    cout << endl;


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
