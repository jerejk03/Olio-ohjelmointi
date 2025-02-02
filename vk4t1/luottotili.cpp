#include "luottotili.h"
#include "pankkitili.h"
Luottotili::Luottotili(string owner, double limit):Pankkitili(owner)
{
    luottoRaja = limit;
}

bool Luottotili::deposit(double dep)
{
    if (dep < 0)
    {
        cout<<"Negatiivista talletusta ei voi tehda."<<endl;
        return false;
    }
    else
    {
        cout<<"Luoton talletus onnistui. Talletetaan " << dep <<endl;
        saldo += dep;
        return true;
    }
}

bool Luottotili::withdraw(double wit)
{
    if (wit < 0)
    {
        cout << "Negatiivista nostoa ei voi tehdä. Nostoa ei tehty." << endl;
        return false;
    }
    else if (saldo - wit < -luottoRaja)  // Tarkistetaan, ettei ylitetä luottorajaa
    {
        cout << "Luottotililla ei ole tarpeeksi saldoa. Nostoa ei tehty." << endl;
        return false;
    }
    else
    {
        cout << "Luoton nosto onnistui. Nostetaan " << wit << endl;
        saldo -= wit;
        return true;
    }
}

