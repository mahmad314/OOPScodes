#include<iostream>
using namespace std;
// In This case we are using function templates to enhance reusability of the code
template <class A1,class A2>
double average(A1 a,A2 b){
    double c=(a+b)/2;
    return c;
}
int main(){
    cout<<average(8,88.6)<<endl;
    return 0;
}