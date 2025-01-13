#include "dht.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

DHT::DHT()
{
    cout<<"DHT constructor"<<endl;
    begin();
}

DHT::~DHT()
{
    cout<<"DHT destructor"<<endl;
}

void DHT::begin()
{
    srand(time(NULL));
    temperature = 0.0;
}

float DHT::readTemperature()
{
    temperature = rand()%25 +1.0;
    return temperature;
}
