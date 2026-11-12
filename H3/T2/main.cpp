#include <iostream>
#include "person.h"
#include "student.h"
#include "teacher.h"

using namespace std;

int main()
{

    Person objPerson("Ville");
    Student objStudent("Maija",501);
    Teacher objTeacher("Liisa", 313);

    //Luodaan vektori

    vector<Person*> lista;
    //Lisätään oilioiden osoitteet
    lista.push_back(&objPerson);
    lista.push_back(&objStudent);
    lista.push_back(&objTeacher);

    for(auto a: lista){
        a->sayStatus();
    }

//    objPerson.sayStatus();
//    objStudent.sayStatus();
//    objTeacher.sayStatus();

    cout << "Hello World!" << endl;
    return 0;
}
