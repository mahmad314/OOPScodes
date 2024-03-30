#include<iostream>
using namespace std;
int main(){
    int a[5]={1,9,6,7,8};
    for(int i=1;i<5;i++){
        for(int j=0;j<5-i;j++){
            int temp=0;
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
            else {
                continue;
            }
        }
    }
    for(int k=0;k<5;k++){
        cout<<a[k]<<endl;
    }
    return 0;
}