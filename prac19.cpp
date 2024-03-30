#include<iostream>
using namespace std;
class User{
    string name;
    int id;
    User *friendlist;
    int no_of_friends;
    public:
        User(){
            cout<<"Enter your name "<<endl;
            cin>>name;
            cout<<"Enter your id "<<endl;
            cin>>id;
            cout<<"Memory allocated with 1 capacity"<<endl;
            cout<<"-----------------------"<<endl;

        }
        void addfriends(){
            cout<<"Enter the number of friends"<<endl;
            cin>>no_of_friends;
            friendlist=new User[no_of_friends];
        }
        void showfriendsdata(){
            cout<<name<<"'s Friends "<<endl;
            for(int i=0;i<no_of_friends;i++){
                cout<<"Name :"<<friendlist[i].name<<endl;
                cout<<"ID :"<<friendlist[i].id<<endl;
                cout<<"_______"<<endl;
            }
        }
        User *getptr(){
            return friendlist;
        }
        ~User(){
            cout<<"Memory de allocatd for  "<<this->name<<endl; 
            
        }
};
int main(){
    User u1;
    u1.addfriends();
    u1.showfriendsdata();
    // whole array is deleted at once
    delete [] u1.getptr();
    return 0;
}