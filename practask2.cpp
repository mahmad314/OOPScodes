#include<iostream>
using namespace std;
class Spaceship;
void enemydr( );
class Enemydrone{

    static int no_of_drones;
    friend void fire(Enemydrone,Spaceship );    
    friend void enemydr( );    

    public:
        Enemydrone(){
            enemydr();
        }
        void kill(){
            no_of_drones--;
        }
        static int getnod(){
            return no_of_drones; 
        }
};
void enemydr(){
    int s;
    cout<<"enter the number of enemy drones "<<endl;
    cin>>s;
    Enemydrone ::no_of_drones=s;

}
class Spaceship{
    string name;
    friend void fire(Enemydrone,Spaceship );
    
    public:
        Spaceship(){
            cout<<"enter the name of spaceship"<<endl;
            cin>>name;
        }
        string getn(){
            return name;
        }

        };
int Enemydrone:: no_of_drones;
void fire(Enemydrone e1,Spaceship s1){
    char selection;
    while(true ){
        cout<<"press f to fire"<<endl;
        cin>>selection;
        if(selection=='f'||selection=='F'){
            cout<<" Enemy Drone Destroyed by "<<s1.getn()<<endl;
            e1.kill();
            cout<<e1.getnod()<<"Enemy Drones Left "<<endl;
        }else {
            cout<<s1.getn()<<" is Destroyed"<<endl;
            cout<<"Game Over"<<endl;
            exit(0);

        }
    }

}
int main(){
    Spaceship s1;
    Enemydrone enemy;
    fire(enemy,s1);

    return 0;
}