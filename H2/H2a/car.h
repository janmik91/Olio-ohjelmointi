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
    void setBrand(string a);
    void setModel(string b);
    void setYearModel(int c);
};

#endif // CAR_H
