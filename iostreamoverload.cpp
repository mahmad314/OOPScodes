#include<iostream>
using namespace std;
class Student{
    string name;
    int age;
    string gender;
    public:
        Student(){
            
        }
        friend istream & operator >> (istream &in,Student &s1);
        friend ostream & operator >> (ostream &ot,Student &s1);

};


int main(){
    
    return 0;
}