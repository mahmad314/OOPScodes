#include<iostream>
using namespace std;
class Person{
    string name;
    int age;
    protected:
        string gender;
        string getname(){
            return name;
        }
        void setname(string name){
            this->name=name;
        }
};
class Student: private Person {
    int regno;
    public:
    string gen(string ge){
        gender=ge;
            // this->gender=ge ;
        }
        void sname( ){
            cout<<gender<<endl;
        }
};
int main(){
    Student s1;

    s1.gen("ahmad");
    s1.sname();
    // s1.setname("muhammad ");
    // cout<<s1.getname();
    return 0;
}