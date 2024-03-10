#include<iostream>
using namespace std;
class Man{
    int *h=new int;
    char levell;
    public:
        Man(){

        }
        Man(Man &m){
            //Deep copyy 
            int *temp;
            temp=m.h;
            *h=*temp;
            levell=m.levell;
        }
        void seth(int r){
            *h=r;
        }
        void setl(char l){
            levell=l;
        }
        int geth(){
            return *h;
        }
        char getl(){
            return levell;
        }
};
int main(){
    Man m1;
    m1.seth(78);
    m1.setl('B');
    Man m2(m1);
    cout<<"object 1"<<endl;
    cout<<m1.geth()<<endl;
    cout<<m1.getl()<<endl;
    cout<<"object 2"<<endl;
    cout<<m2.geth()<<endl;
    cout<<m2.getl()<<endl;
    cout<<"--------after changing ---------"<<endl;
    m2.seth(56);
    //Here problem is that the shallow copy is happening 
    //when we do deep copy by user defined copy constructor things works perfect
    
    cout<<"object 1"<<endl;
    cout<<m1.geth()<<endl;
    cout<<m1.getl()<<endl;
    cout<<"object 2"<<endl;
    cout<<m2.geth()<<endl;
    cout<<m2.getl()<<endl;
    return 0;
}