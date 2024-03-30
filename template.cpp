#include<iostream>
using namespace std;
//In this we implement classes and boost or reusability
template<class T>
class Vector{
    public:
    T* arr;
    int size;
    Vector(int a){
        size =a;
        arr=new T[size];
    }
    T dotproduct(Vector a){
        T d=0;
        for(int i=0;i<size;i++){
            d+=arr[i]*a.arr[i];
        }
        cout<<"Dot Product = "<<d<<endl;
        return 0;
    }
};
int main(){
    Vector<long long > v1(3);
    v1.arr[0]=1111;
    v1.arr[1]=55141;
    v1.arr[2]=44120;
    Vector<long long > v2(3);
    v2.arr[0]=4121;
    v2.arr[1]=21444;
    v2.arr[2]=31094;
    v1.dotproduct(v2);
    return 0;
}