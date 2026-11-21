#include <iostream>
#include "chef.h"
#include "italianchef.h"

using namespace std;

int main()
{
//    Chef objChef1("Gordon Ramsay");
    ItalianChef objChef1("Anthony bourdain");
    objChef1.makeSalad();
    objChef1.makeSoup();
    objChef1.makePasta();
    cout<<"name of the Italian Chef is "<<objChef1.getName()<<endl;
    return 0;
}
