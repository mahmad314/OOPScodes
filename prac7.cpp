#include<iostream>
using namespace std;
class Num{
    double a,b;
    public:
    double c;
        Num(){
            cout<<"enter the first number "<<endl;
            cin>>a;
            cout<<"enter the Second number "<<endl;
            cin>>b;
        }
        void pr(){
            cout<<c<<endl;
        }
        double geta(){
            return a;
        }
        double getb(){
            return b;
        }
        double getc(){
            return c;
        }
};
Num compute(Num n1){
    n1.c=((n1.geta()+n1.getb())*(n1.geta()+n1.getb()));
    return n1;
}
int main(){
    Num n;
    compute(n).pr();
    return 0;
}