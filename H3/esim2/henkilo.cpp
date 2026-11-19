#include "henkilo.h"

Henkilo::Henkilo(const string &e,const string &s, const string &ko, const string &po, const string &kau):enimi(e),snimi(s)
{
    objOsoite=make_unique<Osoite>(ko, po, kau)
}

void Henkilo::tulostaTiedot()
{
    cout<<enimi<<" "<<snimi<<endl;
}
