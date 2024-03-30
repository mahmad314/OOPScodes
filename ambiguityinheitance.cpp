#include<iostream>
using namespace std;
class Vehicle{
    int chasi_no;
    string name;
    public:
        void hel(){
            cout<<"welcome to vehicle "<<endl;
        }
};
class Aesthetics{
    char color;
    public:
        void hel(){
            cout<<"hello Aesthetics "<<endl;
        }
};
class Car:public Vehicle,public Aesthetics{
    int a;
    public:
    void hel(){
        Aesthetics::hel();
    }
};
//Points 
//If parent class have same function name then there will be ambiguity 
//but if function with same name in different parent classes are with different parameters still There will be amabigiuty
int main(){
    Car c1;
    c1.hel();
    return 0;
}