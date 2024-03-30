#include<iostream>
using namespace std;
class Parent{
    string name ;
    int id;
    int regno;
    public:
        void say(){
            cout<<"Hello World"<<endl;
        }
};
class Base:public Parent{
    string passport;
    public:
        void say(){
            cout<<"Hi My name Is Muhammad Ahmad"<<endl;
        }
};

int main(){
    Base b2;
    b2.say();
    return 0;
}