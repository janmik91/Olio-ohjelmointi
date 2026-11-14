#include "car.h"

Car::Car(string b, string m, int ym) {
    brand=b;
    model=m;
    yearModel=ym;
}


void Car::printData()
{
    cout<<"Auton malli on: "<<brand<<endl;
    cout<<"Auton merkki on: "<<model<<endl;
    cout<<"Auton vuosimalli on: "<<yearModel<<endl;
    cout<<endl;//jokaisen auton väliin väli tulosten tarkistamisen helpottamiseksi
}

