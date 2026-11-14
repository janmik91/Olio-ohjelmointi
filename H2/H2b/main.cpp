#include <iostream>
#include <vector>
#include "car.h"

using namespace std;

int main()
{
    vector<Car> carInv;
    carInv.emplace_back("Ford", "Fiesta", 2015);
    carInv.emplace_back("Citroen", "Jumpy", 2025);
    carInv.emplace_back("BMW", "Alpina", 2010);

    carInv[1].printData();
    for(int x=0; x<=2; x++){
        carInv[x].printData();
    }
    return 0;
}
