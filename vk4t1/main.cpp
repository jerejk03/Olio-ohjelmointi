#include <iostream>
#include "asiakas.h"

using namespace std;

int main()
{
    Asiakas asiakas1("Jere",1000);
    asiakas1.talletus(100);
    asiakas1.showSaldo();
    cout<<"\n";
    Asiakas asiakas2("Ronja",500);
    asiakas2.showSaldo();
    cout<<"\n";
    asiakas1.tiliSiirto(25,asiakas2);
    asiakas1.showSaldo();
    asiakas2.showSaldo();
    cout<<"\n";
    asiakas2.tiliSiirto(5,asiakas1);
    asiakas1.showSaldo();
    asiakas2.showSaldo();
    return 0;
}
