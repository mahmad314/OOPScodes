#include<iostream>
using namespace std;
class Student{
    int s_id;
    double marks[5];
    float average=0;
    string subjects[5]={"MT102","ES111","CS112","HM102","MM101"};
    friend  comavg(Student a[],int size);
    public:
        Student(){
            cout<<"enter your reg no"<<endl;
            cin>>s_id;
            for(int i=0;i<5;i++){
                cout<<"Enter your marks in "<<subjects[i]<<endl;
                cin>>marks[i];
                average+=marks[i];
            }
            average/=5;

        }
        
};
void comavg(Student a[],int size){
    double ave[size];
    for(int i=0;i<size;i++){
        ave[i]=a[i].average;
    }
    for(int t=0;t<size;t++){
        for(int j=0;j<size-t;j++){
            double temp;
            if(ave[t]>ave[j]){
                temp=ave[j];
                ave[j]=ave[t];
                ave[t]=temp;
            }else {
                continue;
            }
        }
    }
    for(int k=0;k<3;k++){
        cout<<k+1<<"th positions is with "<<ave[k]<<endl;
    }
}
int main(){
    Student s[6];
    comavg(s,6);
    
    return 0;
}