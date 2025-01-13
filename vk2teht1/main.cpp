#include <iostream>
#include "game.h"

using namespace std;

int main()
{
    Game guessing(20); //luodaan muuttuja käyttäen "Game" -luokkaa halutulla arvolla
    guessing.play(); //käytetään muuttujaa pelin käynnistykseen

    return 0;
}
