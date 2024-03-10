#include<iostream>
using namespace std;
class Student;
class Classroom{
    int total_problems;
    static int problems_solved;
    friend void solveproblem(Student s[],int size,Classroom c1 );
    public:
    void setps(){
        problems_solved++;
    }
    int  getps(){
        return problems_solved;
    }
        Classroom(){
            cout<<"enter the total no of problems "<<endl;
            cin>>total_problems;
        }
};
class Student{
    string name;
    float mathprof;
    
    friend void solveproblem(Student s[],int size,Classroom c1);
    public:
    Student(){
        cout<<"enter your name"<<endl;
        cin>>name;
        cout<<"enter the Math proficiency"<<endl;
        cin>>mathprof;
        cout<<"----------------------------"<<endl;
    }
    
};


int Classroom :: problems_solved;
void solveproblem(Student s[],int size,Classroom c1 ){
    int t=0;
    for(int i=0;i<(size/2);i++){
        c1.setps();
        if(size%2==0){
        cout<<"task Solved by collaboration of "<<s[t].name<<" & "<<s[t+1].name<<endl;
        t+=2;}
        else{
            cout<<"task Solved by collaboration of "<<s[t].name<<" & "<<s[t+1].name<<endl;
            t+=2;
            if(i=(size/2)-1){
                cout<<"task Solved by collaboration of "<<s[t].name<<" & "<<s[t+1].name<<" & "<<s[t+2].name<<endl;
            }
        }

    }
    cout<<"total problems solved are "<<c1.getps()<<endl;
} 
int main(){
    int siz;
    cout<<"enter the number of students "<<endl;
    cin>>siz;
    Student s1[siz];
    Classroom c1;
    solveproblem(s1,siz,c1);
    
    return 0;
}