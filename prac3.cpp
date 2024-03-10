#include<iostream>
using namespace std;
class Complex{
    int r,c;
    public:
        Complex (){
            cout<<"temp is created";
        }
        Complex(int a,int b){
            r=a;
            c=b;
        }
        friend Complex sum(Complex a1,Complex a2);
        void print(){
            cout<<r<<" + "<<c<<"i"<<endl;
        }
};
Complex sum(Complex a1,Complex a2){
    Complex temp1;
    temp1.r=(a1.r+a2.r);
    temp1.c=(a1.c+a2.c);
    return temp1;
}
int main(){
    Complex r1(1,3),r2(4,4);
    cout<<"------"<<endl;
    sum(r1,r2).print();
    return 0;
}