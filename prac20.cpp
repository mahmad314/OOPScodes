#include<iostream>
#include<cctype>
using namespace std;
void convert(char *ptr){
    while(*ptr!='\0'){
        *ptr=toupper(*ptr);
        ptr++;
    }


}
int main(){
    char gt[]="my name is Muhammad Ahmad";
    convert(gt);
    cout<<gt<<endl;
    return 0;
}

