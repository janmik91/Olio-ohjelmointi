#ifndef HENKILO_H
#define HENKILO_H
#include <iostream>

using namespace std;

class Henkilo
{
    string enimi;
    string snimi;
public:
    Henkilo(string a, string b);
    void tulostaTiedot();
};

#endif // HENKILO_H
