#include "pankkitili.h"

Pankkitili::Pankkitili(string owner)
{
    omistaja = owner;
}

double Pankkitili::getBalance()
{
    return saldo;
}

bool Pankkitili::deposit(double dep)
{
    if (dep < 0)
    {
        cout<<"Negatiivista talletusta ei voi tehda."<<endl;
        return false;
    }
    else
    {
        cout<<omistaja<<": Talletus onnistui. Talletetaan " << dep <<endl;
        saldo += dep;
        return true;
    }


}

bool Pankkitili::withdraw(double wit)
{
    if (wit < 0)
    {
        cout <<"Negatiivista nostoa ei voi tehda. Nostoa ei tehty" <<endl;
        return false;
    }
    else if(wit > saldo)
    {
        cout <<"Pankkitililla ei tarpeeksi saldoa. Nostoa ei tehty" <<endl;
        return false;
    }
    else
    {
        cout<<omistaja<<": Nosto onnistui. Nostetaan " << wit <<endl;
        saldo -= wit;
        return true;
    }
}
