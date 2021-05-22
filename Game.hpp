#ifndef GAME_LOOP
#define GAME_LOOP

//Native header files
#include <iostream>      //I/O stream operations
#include <string>       //String class
#include <unistd.h>    //Miscellaneous Functions for the Linux Terminal in C++

//Custom Header Files
#include "wordType.hpp"        //The unknown word to be guessed
#include "wordbankType.hpp"   //The letters that have been/can be guessed
#include "gallowType.hpp"    //The ASCII art of the gallow
#include "textMods.h"       //Contains text coloring

//Namespace
using namespace std;     //Small project, so using namespace std is acceptable

//****************************** GAME DECLARATION *******************************\\

//Class: Game (contains the contents of the game, including the game loop)
class Game
{
    private:
        bool gameover;
        int guesses;

    public:
        Game();
        void run();
        void stop();
        void displayGame();
        void guess();
        void endWithLoss();
        void endWithWin();
};

//****************************** GAME INITIALIZATION *******************************\\

//Default constructor
Game::Game()
{
    //Set starting values
    gameover = false;
    guesses  = 10;         //There is no standard amount of guesses in Hangman, but I saw the numbers 8-11 often.

    //Start the game upon creation
    gameover = false;
    this->run();    
}

//run() (game loop)
void Game::run()
{
    //Header
    cout << LIGHT_BLUE << "Starting game!" << endl;

    while(!gameover)
    {
        this->displayGame();
        sleep(1);
        this->guess();
        sleep(5);
    }

}

//stop() (ends the game loop)
void Game::stop()
{
    
}

//displayGame (word progress, wordbank, gallow, etc.)
void Game::displayGame()
{
    cout << "Displaying game!" << endl;
}

//guess()
void Game::guess()
{
    cout << "Guessing!" << endl;
}

//End game (lost)
void Game::endWithLoss()
{
    //Empty
}

//End game (won)
void Game::endWithWin()
{
    //Empty
}

#endif
