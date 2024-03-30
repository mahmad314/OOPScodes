#include<iostream>
using namespace std;
//Template with the default parameter
template<class T1=int ,class T2=string >
class Maha{
    T1 x;
    T2 y;
    public:
        Maha(T1 a,T2 b){
            x=a;
            y=b;
        }
        void display(){
            cout<<"value of first is "<<x<<endl;
            cout<<"value of Second is "<<y<<endl;
    }
};
int main(){
    Maha<> ma(421,"mana");
    ma.display();
    return 0;
} 