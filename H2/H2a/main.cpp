#include <iostream>
#include "car.h"
#include "rectangle.h"
#include "student.h"
#include <memory>

using namespace std;



int main()
{
    //car osio tehtävästä

    Car objCar("ford", "mustang", 2014);
    objCar.printData();

    //rectangle osio tehtävästä

    Rectangle *objectRectangle2;
    objectRectangle2 = new Rectangle;
    objectRectangle2->setWidth(10);
    objectRectangle2->setHeight(5);
    cout<<"nelion pinta-ala on: ";
    cout<<objectRectangle2->getArea()<<endl;
    cout<<"Nelion ymparys mitta on: ";
    cout<<objectRectangle2->getCircum()<<endl;
    delete objectRectangle2;

    //student osa tehtävästä

    unique_ptr<Student> objectStudent = make_unique<Student>();
    objectStudent->setName("Kalle");
    objectStudent->setStudentNumber(123456);
    objectStudent->setAverage(7.6);
    cout<<"Opiskelijan nimi: "<<objectStudent->getName()<<endl;
    cout<<"Opiskelijan opiskelijanumero on: "<<objectStudent->getStudentNumber()<<endl;
    cout<<"Opiskelijan keskiarvo on: "<<objectStudent->getAverage()<<endl;

    return 0;
}
