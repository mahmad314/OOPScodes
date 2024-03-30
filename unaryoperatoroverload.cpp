#include<iostream>
using namespace std;
class Person{
    string name;
    int id;
    public:
        Person(){
            name="";
            id=0;
        }
        Person(string name,int id){
            this->name=name;            
            this->id=id;
        }
        //pre increment/decrement
        void operator ++( ){
            ++id;
        }
        void operator--(int){
            id--;
        }
        void show(){
            cout<<"Name : "<<name<<endl;
            cout<<"Id : "<<id<<endl;
        }
};
int main(){
    Person p1("Virat ",87);
    p1.show();
    ++p1;
    cout<<"----"<<endl;
    p1.show();
    p1--;
    cout<<"---"<<endl;
    p1.show();
    // (++p1).show();//pre increment 
    // (p1--).show();
    p1.show();    

    return 0;
}