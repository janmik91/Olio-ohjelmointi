#include <iostream>
#include "account.h"
#include "savingsaccount.h"
using namespace std;

int main()
{
    SavingsAccount objSA("FI1234567",3.50);
objSA.displayInfo();
    objSA.deposit(1500.00);
    objSA.displayInfo();
    objSA.withdraw(500.00);
    objSA.displayInfo();

    return 0;
}
