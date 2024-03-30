#include<iostream>
using namespace std;
class Human{
    public:
    string name;
        void think(){
            cout<<name<<"is thinking "<<endl;
        }
};
class Engineer:public Human{

};
int main(){
    Engineer e1;
    e1.name="Muhammad";
    e1.think();
    return 0;
}