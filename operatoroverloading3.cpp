#include<iostream>
using namespace std;
class Result{
    int marks;
    public:
    Result(){

    }
    Result(int a){
        marks=a;
    }
    Result operator +=(int a){
        marks+=a;
    }
    void show(){
        cout<<"Marks Are "<<marks<<endl;
    }
    friend Result operator-=(Result &obj,int a);
};
Result operator-=(Result &obj,int a){
    obj.marks-=a;
    return obj;
}
int main(){
    Result r1(32);
    r1+=5;
    r1.show();
    r1-=6;
    r1.show();
    r1+=6;
    r1.show();
    return 0;
}