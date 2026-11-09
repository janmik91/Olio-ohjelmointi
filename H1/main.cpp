<<<<<<< HEAD
#include <iostream>
#include <iomanip>

using namespace std;

void calcSum(int a,int b){
    cout<<"The sum of your numbrs is: ";
    cout<<a+b<<endl;
}

void caldDiv(int a,int b){

    float num1, num2, num3;
    num1=a;
    num2=b;
    if (num2==0){
        throw std::runtime_error("Your dividing number can't be a 0!");
    }
    else {
        cout<<setprecision(2)<<fixed;
        num3=num1/num2;
        cout<<"The your first number divided by your second number is: ";
        cout<<num3<<endl;
    }
}

int retSum(int a, int b){
    return a+b;
}

float retDiv(int a, int b){
    float num1, num2;
    num1=a;
    num2=b;
    if (num2==0){
        throw std::runtime_error("jakaja ei saa olla nolla!");
    }
    else{
        return num1/num2;
    }
}

int main()
{
    int num1,num2;
    float result;
    cout << "Please give two whole numbers!" << endl;
    cout << "Your first number is: " ;
    cin>>num1;
    cout<< "and your second number is: ";
    cin>>num2;
    calcSum(num1,num2);
    caldDiv(num1, num2);
    cout<<"The sum of "<<num1<<" and "<<num2<<" is: "<<retSum(num1, num2);;
    cout<<endl;
    try {
        result = retDiv(num1,num2);
        cout << num1 << "/" <<  num2 << " = " << result << endl;
    } catch (runtime_error& e) {
        cout<<"Error: "<< e.what()<< endl;
    }
    return 0;
}


=======
#include <iostream>
#include <iomanip>

using namespace std;

void calcSum(int a,int b){
    cout<<"The sum of your numbrs is: ";
    cout<<a+b<<endl;
}

void caldDiv(int a,int b){

    float num1, num2, num3;
    num1=a;
    num2=b;
    if (num2==0){
        throw std::runtime_error("Your dividing number can't be a 0!");
    }
    else {
        cout<<setprecision(2)<<fixed;
        num3=num1/num2;
        cout<<"The your first number divided by your second number is: ";
        cout<<num3<<endl;
    }
}

int retSum(int a, int b){
    return a+b;
}

float retDiv(int a, int b){
    float num1, num2;
    num1=a;
    num2=b;
    if (num2==0){
        throw std::runtime_error("jakaja ei saa olla nolla!");
    }
    else{
        return num1/num2;
    }
}

int main()
{
    int num1,num2;
    float result;
    cout << "Please give two whole numbers!" << endl;
    cout << "Your first number is: " ;
    cin>>num1;
    cout<< "and your second number is: ";
    cin>>num2;
    calcSum(num1,num2);
    caldDiv(num1, num2);
    cout<<"The sum of "<<num1<<" and "<<num2<<" is: "<<retSum(num1, num2);;
    cout<<endl;
    try {
        result = retDiv(num1,num2);
        cout << num1 << "/" <<  num2 << " = " << result << endl;
    } catch (runtime_error& e) {
        cout<<"Error: "<< e.what()<< endl;
    }
    return 0;
}


>>>>>>> 260978dd816d83302d983efffdd06629a0b7706a
