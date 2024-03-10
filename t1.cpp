#include<iostream>
using namespace std;
int c=1;
double t=0;
class student_grades{
    private:
    double grades[20][5];
    int s_id;
    double average[5];

    string name;
    public:
    student_grades(){
        cout<<"enter your details "<<endl;
        for(int i=0;i<20;i++){
            double sum=0;
            cout<<"enter your name"<<endl;
            cin>>name;
            cout<<"enter your reg_no"<<endl;
            cin>>s_id;
            for(int j=0;j<5;j++){
                cout<<"enter the marks of subject #"<<j+1<<endl;
                cin>>grades[i][j];
                sum+=grades[i][j];
            }
            average[i]=sum/5;
        }}

    void show_details(){
            for(int i=0;i<20;i++){
                cout<<"Subjcet #"<<i+1<<"average is ="<<average[i]<<endl;
            }
        }
        void top_bad(){
            for(;c<20;){
                for(int i=0;i<20-c;i++){
                if(average[i]>average[i+1]){
                    t=average[i];
                    average[i]=average[i+1];
                    average[i+1]=t;
        }  
        }
        c++;
    }
    for(int g=0;g<3;g++){
        cout<<"bad students "<<endl;
        cout<<"student # "<<g+1<<" "<<average[g]<<endl;
    }
        }
    void top_good(){
        for(int g=17;g<20;g++){
            cout<<"good students "<<endl;
        cout<<"student # "<<g+1<<" "<<average[g]<<endl;
    }
    }
        
};
int main(){
    student_grades s1;
    s1.show_details();
    s1.top_bad();
    s1.top_good();
    return 0;
}