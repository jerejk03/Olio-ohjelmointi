#include "Chef.h"
#include <iostream>

using namespace std;

Chef::Chef(string name)
{
    chefName = name;
    cout<<"Chef "<< chefName <<" konstruktori"<<endl;
}

Chef::~Chef()
{
    cout<<"Chef "<< chefName <<" destruktori"<<endl;
}

string Chef::getName()
{
    return chefName; //palautetaan protected muuttuja chefName
}

int Chef::makeSalad(int ainekset)
{
    int annokset = ainekset / 5; //tarvitaan 5 ainesta yhteen annokseen
    cout <<"Chef " << chefName <<" with "<< ainekset <<" items can make salad "<<annokset<<" portions" <<endl;
    return annokset;
}

int Chef::makeSoup(int ainekset)
{
    int annokset = ainekset / 3; //tarvitaan 3 ainesta yhteen annokseen
    cout <<"Chef " << chefName <<" with "<< ainekset <<" items can make soup "<<annokset<<" portions" <<endl;
    return annokset;
}

