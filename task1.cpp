#include <iostream>
using namespace std;
typedef int num;
class Student
{   
    double  marks[5];
    
public:
    num s_id;

    void id(){
        cout<<"enter your  id "<<endl;
        cin>>s_id;
    }
    double retmarks(int a){
        
        
    }
    double  getmarks(int i){
        
        return marks[i];
        
    }
    void marksin()
    {
        for (int i = 0; i < 5; i++)
        {
            cout << "enter the marks for subject #" << i + 1 << endl;
            cin >> marks[i];
        }
    }
};
int main()
{
    double avge[5];
    double avg=0;
    Student giks[5];
    for(int i=0;i<5;i++){
        cout<<"student # "<<i+1<<endl;
        giks[i].marksin();
        giks[i].id();
    }
    
    for(int i=0;i<5;i++){
        double sum=0;
        for(int j=0;j<5;j++){
                sum+=giks[i].getmarks(j);
        }
        avge[i]=sum/5;
    }
    //sort
    for(int i=0;i<5;i++){
        if(giks[i].getmarks[i])
    }
    for(int j=0;j<5;j++){
        cout<<"average of student "<<giks[j].s_id<<" = "<<avge[j]<<endl;
    }
    

    return 0;
}