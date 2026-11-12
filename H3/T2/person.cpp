#include "person.h"

string Person::getName() const{
    return name;
}

void Person::sayStatus(){
    cout<<"Olen henkilö="<<this->getName()<<endl;
}

Person::Person(string n):name(n) {
    cout<<
}
