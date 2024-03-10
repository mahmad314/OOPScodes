#include<iostream>
using namespace std;
int relation;
class Line{
    double a;
    double b;
    double c;
    double slope;
    bool isvertical=0;
    bool ishorizonta=0;
    friend void findroots(Line ,Line );
    public:
        Line(){
            cout<<"enter the coeffiecient of X"<<endl;
            cin>>a;
            cout<<"enter the coeffiecient of Y"<<endl;
            cin>>b;
            cout<<"enter the Constant"<<endl;
            cin>>c;
            if((a==0)&&(b==0)&&(c!=0)){
                cout<<"undefined line" <<endl;
                exit(0);
            }
            if(b==0){
                isvertical=true;
            }else if(a==0){
                ishorizonta=true;
            }
            cout<<"slope is "<<slopecalc()<<endl;

        }
        double  slopecalc(){
            if(isvertical){
                cout<<"slope is not defined"<<endl;
            }else if(ishorizonta){
                slope=0;
                return slope;
            }
            else {
                slope=(-a/b);
                return slope;
            }
            
}
};
int checkrelation(Line l1,Line l2){
    if(l1.slopecalc()==l2.slopecalc()){
        return -1;
    }else if(l1.slopecalc()*l2.slopecalc()==-1){
        return 1;
    }
}
void findroots(Line l1,Line l2){
    double x,y;
    x=(l1.c-l2.c)/(l1.slopecalc()-l2.slopecalc());
    y=(((l1.c)*(l2.slopecalc()))-((l2.c)*(l1.slopecalc())))/(l2.slopecalc()-l1.slopecalc());
    cout<<"roots are ("<<x<<" , "<<y<<" )"<<endl;
}


int main(){
    Line l[2];
    if((checkrelation(l[0],l[1])==-1)){
        cout<<"lines are parallel"<<endl;
    }else if((checkrelation(l[0],l[1])==1)){
        cout<<"lines are Perpendicular"<<endl;
    }
    if((checkrelation(l[0],l[1])!=-1)){
        findroots(l[0],l[1]);
    }
    return 0;
}