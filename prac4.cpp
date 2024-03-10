#include<iostream>
#include<cctype>
using namespace std;
class Romantype{
    string num;

    public:
        Romantype(){
            cout<<"enter the number in roman "<<endl;
            cin>>num;

            for(int i=0;i<num.length();i++){
                num[i]=toupper(num[i]);
            }
            cout<<num<<endl;
        }
        void convert(){
            int decimal=0;
            for(int i=0;i<num.length();i++){
                if(num[i]=='M'){
                    decimal+=1000;
                }else if(num[i]=='D'){
                    decimal+=500;
                }else if(num[i]=='C'){
                    decimal+=100;
                }else if(num[i]=='L'){
                    decimal+=50;
                }else if(num[i]=='V'){
                    decimal+=5;
                }else if(num[i]=='I'){
                    decimal+=1;
                }else if(num[i]=='X'){
                    decimal+=10;
                }else {
                    cout<<"you entered wrong "<<endl;
                }

            }
            cout<<num<<"in decimal = "<<decimal<<endl;
        }

};
int main(){
    Romantype r1;
    r1.convert();
    return 0;
}