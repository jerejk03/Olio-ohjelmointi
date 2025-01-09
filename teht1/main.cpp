#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    std::srand(12);
    cout << "Arvaa luku valilta 1-20." << endl;
    int satunnaisluku = 1 + (std::rand() % 20);
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
