#include "notifikaattori.h"
#include <iostream>
#include "seuraaja.h"

Notifikaattori::Notifikaattori()
{
    cout<<"Luodaan notifikaattori"<<endl;
}

void Notifikaattori::lisaa(Seuraaja* lisays)
{
    lisays->next = seuraajat;
    seuraajat = lisays;
    cout<<"Notifikaattori lisaa seuraajan "<<seuraajat->getNimi()<<endl;
}

void Notifikaattori::poista(Seuraaja* poisto)
{
    Seuraaja* nykyinen = seuraajat;
    Seuraaja* edellinen = nullptr;

    while(nykyinen != nullptr){
        if(nykyinen == poisto){
            if(edellinen == nullptr){
                seuraajat = nykyinen->next;
            }
            else{
                edellinen->next = nykyinen->next;
            }
            cout<<"Notifikaattori poistaa seuraajan "<<seuraajat->getNimi()<<endl;
            return;
        }
        edellinen = nykyinen;
        nykyinen = nykyinen->next;
    }
}

void Notifikaattori::tulosta()
{
    Seuraaja* nykyinen = seuraajat;
    cout<<"Notifikaattorin seuraajat:"<<endl;
    while (nykyinen != nullptr) {
        cout<<"Seuraaja "<<nykyinen->getNimi()<<endl;
        nykyinen = nykyinen->next;
    }
}
void Notifikaattori::postita(string postitus)
{
    Seuraaja* nykyinen = seuraajat;
    while (nykyinen != nullptr) {
        nykyinen->paivitys(postitus);
        nykyinen = nykyinen->next;
    }
}

