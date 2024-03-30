// 
#include<iostream>
using namespace std;
class H{
    int a;
    int *b=new int;
    public:
        H(){

        }
        H(int a,int c){
            this->a=a;
            *b=c;
        }
        H(H &a1){
            int *c;
            c=a1.b;
            a=a1.a;
            *b=*c;
        }
        void print(){
            cout<<"value  is "<<a<<endl;
            cout<<"value  is "<<*b<<endl;
        }
        void chag1(int s){
            a=s;
        }
        void chag2(int q){
            *b=q;
        }
};
int main(){
    H s1(2,5);
    s1.print();
    H s2(s1);
    cout<<"object 1 "<<endl;
    s1.print();
    cout<<"object 2"<<endl;
    s2.print();
    s2.chag1(65);
    s2.chag2(31);
    cout<<"after changing "<<endl;
    cout<<"object 1 "<<endl;
    s1.print();
    cout<<"object 2"<<endl;
    s2.print();
    return 0;
}