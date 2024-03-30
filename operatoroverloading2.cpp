#include<iostream>
#include<cmath>
using namespace std;
template <class A=int,class B=int ,class C=int>
class Vector{
    A a;
    B b;
    C c;
    double vmgn;
    public:
        Vector(){

        }
        Vector(A x,B y ,C z){
            a=x;
            b=y;
            c=z;
        }
        void  display(){
            cout<<"("<<a<<" , "<<b<<" , "<<c<<" )"<<endl;
            cout<<"Magnitude "<<magnitude()<<endl;
        }
        double magnitude(){
            double mgn;
            mgn=pow((pow(a,2)+pow(b,2)+pow(c,2)),0.5);
            return mgn;
        }
        A retcom(int i){
            
                if(i==0){
                    return a;
                }else if(i==1){
                    return returnb();
                }else {
                    return returnc();
                }
            }
        B returnb(){
            return b;
        }
        C returnc(){
            return c;
        }
        
        Vector operator*(Vector &v1){
            Vector temp;
            double vp[3][3];
            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    if(i==0){
                        vp[i][j]=1;
                    }if(i==1){
                        vp[i][j]=retcom(j);
                    }if(i==2){
                        vp[i][j]=v1.retcom(j);
                    }
                }
            }
            temp.a=(vp[1][1]*vp[2][2])-(vp[1][2]*vp[2][1]);
            temp.b=-((vp[1][0]*vp[2][2])-(vp[1][2]*vp[2][0]));
            temp.c=(vp[1][0]*vp[2][1])-(vp[1][1]*vp[2][0]);
            // double dp,product=1;
            // dp=pow((this->a*v1.a)+(this->b*v1.b)+(this->c*v1.c),2);
            // cout<<dp<<endl;
            // product=pow(this->magnitude()*v1.magnitude(),2);
            // cout<<product<<endl;
            // temp.vmgn=pow(product-dp,0.5);
            return temp;


        }
        void getvmgn(){
            cout<<"Vector product = "<<vmgn<<endl;
        }
        
};
int main(){
    Vector<double ,double ,double> v1(2.1,1.4,-4.8),v2(1,3,2),v4,v3(1,2,2);
    v4=v1*v2*v3;
    v4.display();
    
    return 0;
}