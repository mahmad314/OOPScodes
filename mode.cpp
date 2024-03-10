#include<iostream>
using namespace std;
double mode(int a[]){

}
int main(){
    int ct=0;
    int data[]={1,2,2,4,5};
    int b[5][2];
    for(int i=0;i<5;i++){
        
        for(int j=0;j<2;j++){
            cout<<"enter the "<<i<<"*"<<j<<"element"<<endl;
            b[i][j]=b[data[i]][j];
        }
    }
    for(int a=0;a<5;a++){
        
        for(int i=a+1;i<5;i++{
        
            if(data[a]==data[i]){
                ct++;
                for(int i=0;i<5;i++){
                    for(int j=0;j<2;j++){
                        b[i][j]=b[i]
                    }
                }
            }
        }
        }
    }
    cout<<"printing "<<endl;
    for(int i=0;i<5;i++){
        for(int j=0;j<2;j++){
            cout<<b[i][j]<<"\t";
        }
        cout<<endl;
    }
    return 0;
}