#include <iostream>
#include "pankkitili.h"

using namespace std;

int main()
{
    Pankkitili tili1("Anna Virtanen", "1111", 850);
    Pankkitili tili2("Matti Meikalainen","9999",100);
    cout << "Tulostetaan tilitiedot" << endl;
    tili1.tulostaTilitiedot();
    tili2.tulostaTilitiedot();
    return 0;
}
