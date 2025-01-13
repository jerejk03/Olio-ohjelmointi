#include <iostream>
//#include "lcd.h"
//#include "dht.h"
#include "mittari.h"

using namespace std;

int main()
{
    Mittari M;

    for(int i = 0; i<5; i++)
    {
        M.mittaus();
    }


    return 0;
}
