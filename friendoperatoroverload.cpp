#include<iostream>
using namespace std;
class Marks{
    int ph;
    public:
        Marks(){
        }
        Marks(int a){
            ph=a;
        }
        void show(){
            cout<<"MARKS = "<<ph<<endl;
        }
        friend Marks operator+(Marks m,Marks c);
};
//in the operator overloading through friend function the instance of the class using the operator itself become the argument
//the object before the operator also become argument and object after it also becomes argument
Marks operator+(Marks m,Marks c){
    Marks temp;
    temp.ph=m.ph+c.ph;
    return temp;
}
int main(){
    Marks m1(98),m2(31),m3;
    m3=m2+m1;

    m3.show();   
    return 0;
}