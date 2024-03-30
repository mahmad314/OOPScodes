#include<iostream>
using namespace std;
class Student{
    string name;
    int id;
    static int count ;
        
    public:
    string subjects[5]={"MM102","CS101","HM102","MM102","DS101"};

    double grades[5][5];
    Student(int ){

    }
    Student(){
        cout<<"Student # "<<count+1<<endl;
        count++;
        cout<<"enter your name "<<endl;
        cin>>name;
        cout<<"enter your id "<<endl;
        cin>>id;
        cout<<"enter the marks "<<endl;
        for(int i=0;i<5;i++){
            cout<<"Subjects # "<<subjects[i]<<endl;
            cin>>grades[count][i];
        }
    }
    string getname(){
        return this->name;
    }
    int getid(){
        return id;    
    }

};
class Average:public Student{
    public:
        double average[5];
        Average(Student s[]):Student(0){
            
            for(int i=0;i<5;i++){
                int sum=0;
                for(int j=0;j<5;j++){
                    sum+=s[i].grades[i][j];
                } 
                sum/=5;
                average[i]=sum;
                
            }
            for(int t=0;t<5;t++){
                cout<<"Name : "<<s[t].getname()<<endl;
                cout<<"ID: "<<s[t].getid()<<endl;
                cout<<"Average of "<<s[t].getname()<<" = "<<average[t]<<endl;
                cout<<"Marks are "<<endl;
                
                for(int j=0;j<5;j++){
                    cout<<"Subject # "<<subjects[t]<<" = "<<s[t].grades[t][j]<<endl;
                }
            }
        }
};
int Student::count;
int main(){
    Student s1[5];
    Average a(s1);
    return 0;
}