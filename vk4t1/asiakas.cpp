#include "asiakas.h"

Asiakas::Asiakas(string name,double luotto) : kayttotili(name), luottotili(name,luotto)
{
    nimi = name;
    cout << "Pankkitili luotu " << name << ":lle." <<endl;
    cout << "Luottotili luotu " << name << ":lle. luottoraja " << luotto <<endl;
    cout<<"Asiakkuus luotu "<<name<<endl;
}

string Asiakas::getNimi()
{
    return nimi;
}

void Asiakas::showSaldo()
{
    cout << getNimi() << endl;
    cout <<"Pankkitilin saldo: "<<kayttotili.getBalance() <<endl;
    cout <<"Luottotilin saldo: "<<luottotili.getBalance() <<endl;

}

bool Asiakas::talletus(double tallettaa)
{
    if(kayttotili.deposit(tallettaa) == true)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool Asiakas::nosto(double nostaa)
{
    if(kayttotili.withdraw(nostaa) == true)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool Asiakas::luotonMaksu(double maksaa)
{
    if(luottotili.deposit(maksaa) == true)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool Asiakas::luotonNosto(double nostaa)
{
    if(luottotili.withdraw(nostaa) == true)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool Asiakas::tiliSiirto(double siirto, Asiakas &vastaanottaja)
{
    if(kayttotili.withdraw(siirto) == true)
    {
        vastaanottaja.kayttotili.deposit(siirto);
        cout<<"Tilisiirto onnistui: "<< nimi <<" siirtaa " << siirto << " " << vastaanottaja.nimi <<":lle"<<endl;
        return true;
    }
    else
    {
        cout<<"Tilisiirto epaonnistui. Saldo ei riita."<<endl;
        return false;
    }
}
