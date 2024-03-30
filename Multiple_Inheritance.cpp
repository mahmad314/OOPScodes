#include<iostream>
using namespace std;
class Human{
    public:
    string name;
        void think(){
            cout<<name<<" is thinking "<<endl;
        }
};
class Animal{
    public:
    void bark(){
        cout<<"Barking "<<endl;
    }
};
class Ancients:public Human,public Animal{
};

int main(){
    Ancients a1;
    a1.name ="Abradabra ";
    a1.bark();
    a1.think();
    return 0;
}