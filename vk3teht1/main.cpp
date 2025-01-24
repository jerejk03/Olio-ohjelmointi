#include "Chef.h"
#include "italianchef.h"
#include <iostream>

using namespace std;

int main()
{
    //Chefin ruoanlaitto ja nimi
    Chef chef("Gordon"); //Luodaan muuttuja chef nimeltään Gordon
    chef.makeSalad(16); //tehdään salaattia x määrällä ainesosia
    chef.makeSoup(14); //tehdään keittoa x määrällä ainesosia

    //ItalianChefin ruoanlaitto ja nimi
    ItalianChef italianChef("Mario"); //Luodaan muuttuja italianChef nimeltään Mario
    italianChef.makeSalad(8); //tehdään salaattia x määrällä ainesosia
    italianChef.makeSoup(11); //tehdään keittoa x määrällä ainesosia
    italianChef.askSecret("pizza",15,20); //annetaan salasana, jauhot ja vesi salaista ruokaa varten
    return 0;
}
