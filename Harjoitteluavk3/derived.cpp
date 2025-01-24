#include "derived.h"

Derived::Derived(int a, int b):BaseClass(a,b)
{
    //ennen kuin tullaan tänne, niin BaseClass pitää olla alustettuna.
}

void Derived::kaytaBasea()
{
    alusta();
}
