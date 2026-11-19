#ifndef HENKILO_H
#define HENKILO_H
#include <iostream>
#include <memory>
#include "osoite.h"

using namespace std;

class Henkilo
{
    string enimi;
    string snimi;
public:
    Henkilo(const string &e,const string &s, const string &ko, const string &po, const string &kau);
    void tulostaTiedot();
};

#endif // HENKILO_H
