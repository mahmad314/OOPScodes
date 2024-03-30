#include<iostream>
using namespace std;
template<class A>
class Man{
    public:
    A data;
    Man(A b){
        data =b;
    }
    void show();

};
void tarzen(int a){
    cout<<"Exact Function is Called "<<endl;

}
//Exact function has high priority
template<class B>
void tarzen(B a){
    cout<<"Templatized function is called "<<endl;
}
template<class A>
void Man<A>::show(){
    cout<<data<<endl;
}
int main(){
    Man<string> m1("Muhammad" );
    m1.show();
    tarzen(5);//shows Exact function Has high priority
    tarzen("mana");
    return 0;
}