#include<iostream>
using namespace std;
class Hero{
    string name;
    int age;
    const int a=98;
    static int b;
    public:
    Hero(){
        cout<<"enter your name "<<endl;
        cin>>name;
        cout<<"enter your age"<<endl;
        cin>>age;
    }
    void setname(string s){
        name=s;
    }
    void getname() const {
        cout<<name<<endl;
    }
    void geta(){

    };
    void constant(int s){
        
    }

};
int Hero::b;
//--------------------------Const------------------
//const variable value cant be changed 
//const pinter address cant be changed 
//const object data members cant be changed 
//const object data member can only be accessed by const functions 
//written as return type name()const{//code }
//------------------------Static--------------------
//static is initialed by 0 by default 
//static always initialized outside the class 
//static member or variable can be modified 
//static variable is stored in the static memory 
//static variable is initialed only once throught out its life 
int main(){
    const Hero h1;
    h1.getname();
    return 0;
}