#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H
#include "Chef.h"
#include <string>
using namespace std;

class ItalianChef : public Chef
{
public:
    ItalianChef(string);
    ~ItalianChef();
    bool askSecret(string,int,int);
private:
    int makePizza(int,int);
    string password = "pizza"; //asetetaan salasana pizzaa varten
    int flour;
    int water;
};

#endif // ITALIANCHEF_H
