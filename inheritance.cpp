#include<iostream>
using namespace std;
class Human{
    protected:
        int age=98;
        string name="RIZWAN";
        double height=6.2;
};
class Female: public  Human{
    string color="Blue";
    public:
    string  getcolor(){
        return color;
    }
    void ger(){
        cout<<"Man is mortal"<<endl;
    }
    string  getname(){
        return  name;

    }
    double  geh(){
        return height ; 
    }
    int geta(){
        return age;
    }
    
};
class Male: private  Human{

};
int main(){
    Female f1;

    cout<<"Name is "<<f1.getname()<<endl;
    cout<<"Color is "<<f1.getcolor()<<endl;
    cout<<"age is "<<f1.geta()<<endl;
    cout<<"Height is "<<f1.geh()<<endl;
    return 0;
}