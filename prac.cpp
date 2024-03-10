#include<iostream>
using namespace std;
class Hero{
    int health;
    char level;
    public:
    //constructor always created in public
        Hero(){

        }
        // //User Copy constructor works perfectly with the Dynamic memory  
        // Hero(Hero &a){
        //     cout<<"constructor called"<<endl;
        //     health=a.health;
        //     level=a.level;
        //     }
        void sethealth(int &health){
            this->health=health;
        } 
        void setlevel(char  level){
            this->level=level;
        }    
        void pr(){
            cout<<"Health is "<<this->health<<endl;
            cout<<"level is "<<this->level<<endl;
        }
};
int main(){
    //default copy constructors do shallow copy.
    //shallow copy work perfect for the static allocated memory
    // in the dynamic allocation we need to do deep copy

    int a=887,b=99;
    Hero *h1=new Hero;
    // char a[10]="amaaawsd";
    h1->sethealth(a);
    h1->setlevel('j');
    h1->pr();
    cout<<"-------"<<endl;
    Hero *h2=new Hero;
    // Hero *h2=new Hero(*h1); In this case without user defined copy constructor every thing work perfectly 
    // h2=h1; if we do like that problem arises as shallow copy occurs
    h2->pr();
    cout<<endl;
    h1->pr();
    cout<<"**************"<<endl;
    h2->sethealth(b);
    h2->setlevel('k');
    h1->pr();
    h2->pr();
    
    
    // cout<<"___**"<<endl;
    // h1->pr();
    // h2->pr();


    return 0;
}