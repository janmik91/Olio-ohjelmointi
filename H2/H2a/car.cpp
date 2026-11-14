#include "car.h"

Car::Car(string b, string m, int ym) {
    brand=b;
    model=m;
    yearModel=ym;
}

void Car::printData()
{
    cout<<"Cars brand is "<<brand<<endl;
    cout<<"Cars model is "<<model<<endl;
    cout<<"Car was manufactured in "<<yearModel<<endl;
};


void Car::setBrand(string a)
{
    brand=a;
};

void Car::setModel(string b)
{
    model=b;
};

void Car::setYearModel(int c)
{
    yearModel=c;
};
