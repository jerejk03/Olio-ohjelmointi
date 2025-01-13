#ifndef LCD_H
#define LCD_H
#include <iostream>
using namespace std;

class LCD
{
public:
    LCD();
    ~LCD();
    void begin();
    void print(string);
    string floatToString(float);
private:
    string text;
    //string floatToString(float); TESTAUS
protected:
   /* string text; TESTAUS
    string floatToString(float);*/
};

#endif // LCD_H
