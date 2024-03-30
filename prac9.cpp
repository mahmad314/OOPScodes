#include<iostream>
using namespace std;
class User {
    string name;
    int p_id;
    int no_of_friends;
    public:
        User(){
            cout<<"enter your name "<<endl;
            cin>>name;
            cout<<"enter your Id"<<endl;
            cin>>p_id;
            
        }
        void friendsection(User u1 ){
            cout<<"enter your no of friends"<<endl;
            cin>>u1.no_of_friends;
            User *friends=new User[u1.no_of_friends];
            cout<<"friends of "<<u1.name<<endl;
            for(int i=0;i<u1.no_of_friends;i++){
                cout<<"Name "<<friends[i].name<<endl;
                cout<<"ID "<<friends[i].p_id<<endl;
                cout<<"---------------------------"<<endl;
                
        }
        }
    ~User(){
        cout<<"deallocated memory for "<<name<<endl;
    }
};

int main(){
    User u1;
    u1.friendsection(u1);
    return 0;
}