#include "italianchef.h"
#include <iostream>
using namespace std;

ItalianChef::ItalianChef(string name):Chef(name) //alustetaan ensin Chef luokka, jotta peritty luokka toimii
{
    cout<<"ItalianChef "<< chefName <<" konstruktori"<<endl;
}

ItalianChef::~ItalianChef()
{
    cout<<"ItalianChef "<< chefName <<" destruktori"<<endl;
}

bool ItalianChef::askSecret(string secret, int water, int flour)
{
    if((secret.compare(password)) == 0){ //verrataan annettua salasanaa oikeaan
        cout<<"Password ok!"<<endl;
        makePizza(water,flour); //kutsutaan private funktiota makePizza
        return true;
    }
    else{
        cout<<"Password incorrect!"<<endl;
        return false;
    }
}

int ItalianChef::makePizza(int water, int flour)
{
    int pizza = min(water / 5, flour / 5); //pizzaan tarvitaan 5 jauhoa ja 5 vettä, tehdään sen mukaan kumpaa on vähemmän
    cout<<"ItalianChef "<<chefName<<" with "<<water<<" water and "<<flour<<" flour can make "<<pizza<<" pizza(s)"<<endl;
    return pizza;
}
