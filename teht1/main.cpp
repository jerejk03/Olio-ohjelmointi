#include <iostream>
#include <cstdlib>
#include <ctime> // aikaleimaa varten

using namespace std;

int main()
{
    srand(time(0)); //käytetään aikaleimaa, jotta arvottu luku on aina eri seedista.
    cout << "Arvaa luku valilta 1-20." << endl;
    int satunnaisluku = 1 + (rand() % 20);
    int luettuluku= 0;
    while(luettuluku != satunnaisluku){
        cin >> luettuluku;
        if(luettuluku < satunnaisluku){
            cout << "Arvaamasi luku oli pienempi." << endl;
        }
        else if(luettuluku > satunnaisluku){
            cout << "Arvaamasi luku oli suurempi." << endl;
        }
    }
    cout << "Arvasit oikein!" << endl;

    return 0;
}
