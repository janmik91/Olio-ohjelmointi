#ifndef CAR_H
#define CAR_H
#include <iostream>

using namespace std;

class Car
{
private:
    string brand;
    string model;
    int yearModel;
public:
    Car(string b, string m, int ym);
    void printData();
};

#endif // CAR_H
