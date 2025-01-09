#include <iostream>
#include <cstdlib>
#include <ctime> // aikaleimaa varten

    using namespace std;
    int game(int);

int main()
{
   int maxnum;
   cout << "Anna korkein arvattava luku." << endl;
   cin >> maxnum;
   int arvauslkm = game(maxnum); //kutsutaan game aliohjelmaa ja tallennetaan arvausten lukumäärä

    cout << "Arvasit oikein!" << endl;
    cout << "Arvasit " << arvauslkm << " kertaa!" <<endl;

    return 0;
}

int game(int maxnum)
{
    int arvauslkm = 0;
    srand(time(0)); //asetetaan seed aikaleimalla, mistä arvotaan luvut
    cout << "Arvaa luku valilta 1-" << maxnum << "." <<endl;
    int satunnaisluku = 1 + (rand() % maxnum); //laitetaan arvotut luvut välille 0-maxnum-1 ja lisätään siihen +1, jotta arvotut luvut ovat väliltä 1-maxnum
    int luettuluku= 0;
    while(luettuluku != satunnaisluku){ //jatketaan while silmukkaa niin kauan, kuin arvattu luku ei ole sama kuin arvottu luku
        cin >> luettuluku;

        arvauslkm++;
        if(luettuluku < satunnaisluku){
            cout << "Arvaamasi luku oli pienempi." << endl;
        }
        else if(luettuluku > satunnaisluku){
            cout << "Arvaamasi luku oli suurempi." << endl;
        }
    }

    return arvauslkm; //palautetaan arvausten lukumäärä
}
