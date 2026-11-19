#include "henkilo.h"

Henkilo::Henkilo(string e, string s):enimi(e),snimi(s)
{

}

void Henkilo::tulostaTiedot()
{
    cout<<enimi<<" "<<snimi<<endl;
}
