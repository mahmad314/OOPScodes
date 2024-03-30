#include<iostream>
using namespace std;
class Human{
    public:
    string name;
        void think(){
            cout<<name<<" is thinking "<<endl;
        }
};
class Engineer:public Human{
    public:
    void innovate(){
        cout<<name<<" is innovating"<<endl;
    }
};
class MechanicalEnginner :public Engineer{

};
int main(){
    MechanicalEnginner e1;
    e1.name="Muhammad";
    e1.think();
    e1.innovate();
    return 0;
}