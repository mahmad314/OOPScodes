#include<iostream>
using namespace std;


class Complex{

    int real;
    int imag;
public:
    Complex (int r,int i){
        real=r;
        imag=i;

    }
    Complex (){


    }


    Complex sum(Complex a){
        Complex temp;
        temp.real=a.real+real;
        temp.imag=a.imag+imag;
        return temp;

    }
    void print(){
        cout<<real<<" + "<<imag<<"i";
    }
};
int main(){

    Complex c1(2,3),c2(3,4);
    c1.sum(c2).print();
    
    return 0;
}