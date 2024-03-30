#include<iostream>
using namespace std;
class Student{
    static int counter;
    string name;
    int reg;
    char section;
    float gp;
    public:
        
        Student(){
            counter++;
            cout<<"Welcome student # "<<counter<<endl;
            cout<<"enter your name "<<endl;
            cin>>name;
            cout<<"enter your reg "<<endl;
            cin>>reg;
            cout<<"enter your section "<<endl;
            cin>>section;
            cout<<"enter your gpa "<<endl;
            cin>>gp;
            cout<<"_______________________"<<endl;
        }
        float getgp(){
            return gp;
        }
        void setgp(float gp){
            this->gp=gp;
        }
        void print(){
            cout<<"Name : "<<name<<endl;
            cout<<"Reg# : "<<reg<<endl;
            cout<<"Section: "<<section<<endl;
            cout<<"Gpa: "<<gp<<endl;
        }
};
Student *dblgp(Student *s1){
    float s;
    s=s1->getgp();
    s*=2;
    s1->setgp(s);
    return s1;
}
int Student ::counter=0;
int main(){
    Student *s=new Student[5];
    Student *s1=new Student(*dblgp(s+1));
    s1->print();

    return 0;
}