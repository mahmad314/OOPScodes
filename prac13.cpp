#include<iostream>
using namespace std;
class P{
    static int counter ;
    P *ptr;
    public:
    P(){
        counter ++;
        cout<<"object "<<counter << "created "<<endl;
        cout<<"object created "<<endl;
    }
    void add(){
        ptr=new P[3];
    }
    ~P(){
    }
};
int P ::counter;
int main(){

    return 0;
}