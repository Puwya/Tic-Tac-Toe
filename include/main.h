#pragma once
#include <unistd.h>

#include <iomanip>
#include <iostream>
#include <string>

const unsigned int ONE_SECOND{1000000};

// displays TicTacToe board when called returns nothing
void displayBoard(const char boardAr[][3]);
// displays class header
void displayHeader();
// displays instructions for player
void displayInstructions();
// initializes TicTacToe board to spaces
void initBoard(char boardAr[][3]);
// sets player names defaults will take place if not specified
void setPlayerNames(std::string &playerX, std::string &playerO);
void getAndCheckInp(
    const std::string difficulty, const char menuChoice, char boardAr[][3],
    const char token, const std::string &playerX, const std::string &playerO);
// Get and check input - gets user input and checks to see if spot is take, if move is
// valid then fills spot with current token
// checks all 8 win conditions and returns winning
char winLogic(char boardAr[][3]);
// switches token which intern switches player
void switchToken(char &token);
// once a player has won this function displays winner and board
void displayWinner(
    const char boardAr[][3], const char &whoWon, const std::string &playerX,
    const std::string &playerO);
// checks Ai input and depending on what difficulty was selected
// thats what the Ai's input will be
bool checkAiInput(const std::string difficulty, char boardAr[][3], const char token);
// random move on the board is placed
bool easyAi(char boardAr[][3], const char token);
// specific blocking move is placed if option is available
bool normalAiBlocking(char boardAr[][3], const char token);
// displays thinking timer
void thinking(char boardAr[][3]);
// specific move is win condition is available for Ai
bool normalWinConditionsAi(char boardAr[][3], const char token);
// specific move is win condition is available for Ai
bool hardWinConditionsAi(char boardAr[][3], const char token);
// specific blocking move is placed if option is available
bool hardAiBlocking(char boardAr[][3], const char token);