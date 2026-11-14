#include <iostream>
#include <vector>
#include "car.h"

using namespace std;

int main()
{
    vector<Car> carList;
    carList.emplace_back("Ford", "Fiesta", 2015);
    carList.emplace_back("Citroen", "Jumpy", 2025);
    carList.emplace_back("BMW", "Alpina", 2010);

    carList[1].printData();
    for(int x=0; x<=2; x++){
        carList[x].printData();
    }
    return 0;
}
