#ifndef DHT_H
#define DHT_H

class DHT
{
public:
    DHT();
    ~DHT();
    void begin();
    float readTemperature();
private:
    float temperature;
protected:


};

#endif // DHT_H
