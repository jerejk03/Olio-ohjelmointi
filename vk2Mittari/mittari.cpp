#include "mittari.h"

Mittari::Mittari()
{
    cout<<"mittari luotu"<<endl;
    setup();
}

Mittari::~Mittari()
{
    cout<<"mittari tuhottu"<<endl;

}

void Mittari::setup()
{
    lcdOlio.begin();
    dhtOlio.begin();
    varoitusvalo = 0;
}

void Mittari::mittaus()
{
    float t = dhtOlio.readTemperature();
    if(t < 10.0)
    {
        varoitusvalo = 1;
    }
    else
    {
        varoitusvalo = 0;
    }

    if(varoitusvalo == 1)
    {
        cout<<"lampotila alhainen"<<endl;
    }
    string s = lcdOlio.floatToString(t);
    lcdOlio.print(s);
}
