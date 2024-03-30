#include<iostream>
using namespace std;
int fact(int n){
    //base case 
    if(n==0){
        return 1;

    }else {
        //recursive relation
        return n*fact(n-1);
    }

}
int power(int a){
    //Base Case
    if(a==0){
        return 1;
    }
    return 2*power(a-1);
}
void print(int n){
    if(n==0){
        return ;
    }
    cout<<n<<endl;
    print(n-1);
}
void as (int k){
    if(k==9){
        cout<<"----";
        return ;
        cout<<"00000"<<endl;
    }
    cout<<k<<endl;
}
int main(){
    // cout<<fact(6)<<endl;
    // cout<<power(10)<<endl;
    as(9);
    // print(9);
    return 0;
}