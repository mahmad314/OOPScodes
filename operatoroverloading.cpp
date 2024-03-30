#include<iostream>
using namespace std;
//template  is used here to enhance the reusability
template<class A=int >
class Student{
    A marks;
    A id;
    public:
        Student(){
        }
        Student(A a,A b){
            marks=a;
            id=b;

        }
        Student operator+(Student s1){
            Student temp;
            temp.marks=this->marks+s1.marks;
            return temp;
        }
        Student operator*(Student s){
            Student a;
            a.id=this->id*s.id;
            return a;
        }
        void display(){
            cout<<"Marks = "<<marks<<endl;
            cout<<"Id = "<<id<<endl;
        }
};
int main(){
    Student<float > a(22.32,2),b(10.43,4),c(11,12),d;
    d=c+a+b;
    d=c*a*b;
    d.display();
    return 0;
}