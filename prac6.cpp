#include<iostream>
using namespace std;
class Birthday{
    int d,m,y;
    public:
        void setbirth(){
            cout<<"enter the day"<<endl;
            cin>>d;
            cout<<"enter the month"<<endl;
            cin>>m;
            cout<<"enter the Year"<<endl;
            cin>>y;
        }
        void bpr(){
            cout<<"Birthday : "<<d<<"/"<<m<<"/"<<y<<endl;
        }
};
class Person{
    string name;
    int age;
    string p_id;
    Birthday b1;
    public:
        Person(){
            cout<<"enter your name "<<endl;
            cin>>name;
            cout<<"enter your age "<<endl;
            cin>>age;
            cout<<"enter your id "<<endl;
            cin>>p_id;
            b1.setbirth();
            
            
        }
        void print(){
            cout<<"Name : "<<name<<endl;
            cout<<"Age : "<<age<<endl;
            cout<<"Id : "<<p_id<<endl;
            b1.bpr();
        }

};
class Pet{
    Birthday b;
    string name;
    public:
        Pet(){
            cout<<"enter your name "<<endl;
            cin>>name;
            b.setbirth();
        }
        void pr(){
            cout<<"Name "<<name<<endl;
            b.bpr();
        }
};
int main(){
    Person p1;
    p1.print();
    Pet pe;
    pe.pr();
    
    return 0;
}