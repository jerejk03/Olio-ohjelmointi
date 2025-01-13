#include "game.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

Game::Game(int maxValue)
{
    maxNumbers = maxValue;
    cout << "GAME CONSTRUCTOR: object initialized with " << maxNumbers << " as a maximum value" << endl;
}

Game::~Game()
{
    cout << "GAME DESTRUCTOR: object cleared from stack memory" << endl; //debug tietoa destructista
}

void Game::play()
{
    srand(time(0)); //arvattavan luvun hankintaan käytetään aikapohjaista seediä, jotta se on aina eri
    randomNumber = 1 + (rand() % maxNumbers); //hankitaan arvattava luku väliltä 1 - maxNumbers
    cout << "Give your guess between 1-" << maxNumbers << endl;
    playerGuess = 0; //varmistetaan, että mennään while-loopiin arvaamaan lukua
    while(playerGuess != randomNumber)
    {
        cin >> playerGuess; //luetaan käyttäjän antama arvo
        if(playerGuess < randomNumber){
            cout << "Your guess is too small" << endl;
        }
        else if(playerGuess > randomNumber){
            cout << "Your guess is too big" << endl; //kerrotaan, oliko arvaus pienempi vai isompi kuin arvottu luku
        }
        numOfGuesses++; //lasketaan arvausyritykset
    }
    printGameResult(); //kutsutaan funktiota

}

void Game::printGameResult()
{
    cout << "Your guess '" << playerGuess << "' is right." << endl;
    cout << "You guessed " << numOfGuesses << " time(s)." << endl; //tulostetaan, että arvattiin oikein ja montako yritystä se vei
}
