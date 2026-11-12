#include "savingsaccount.h"

SavingsAccount::SavingsAccount(string ac, double ir):Account(ac),interestRate(ir) {
}

void SavingsAccount::setInterestRate(double newInterestRate)
{
    interestRate = newInterestRate;
}

void SavingsAccount::calculateInterest()
{
    double interest=balance(interestRate/100);
}
