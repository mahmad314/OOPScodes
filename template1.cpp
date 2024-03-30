#include<iostream>
using namespace std;
//Template with the Multiple parameters
template<class T1,class T2,class T3>
class Student{
    public:
    T1 name;
    T2 level;
    T3 regno;
    Student(){
        cout<<"enter your name "<<endl;
        cin>>name;
        cout<<"enter your level "<<endl;
        cin>>level;
        cout<<"enter your Regno "<<endl;
        cin>>regno;
        
    }
    void display(){
        cout<<this->name<<endl;
        cout<<this->level<<endl;
        cout<<this->regno<<endl;
    }
};
int main(){
    Student<int,string ,double> s1;
    s1.display();
    return 0;
}