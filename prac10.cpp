#include<iostream>

using namespace std;

class User{
	
	
	string name;
	int id;
	User ** friendlist; 
	int Nfriends;
	public:
	User(int i,string n){
		id=i;
		name=n;
		Nfriends=0;
		friendlist=nullptr;
		
	}
	
	public:
	void addFriends(User *friendptr){
		
		User ** temp= new User* [Nfriends+1];
		
		for(int i=0;i<Nfriends;i++){
			temp[i]=friendlist[i];
		}
		temp[Nfriends]=friendptr;
		
		Nfriends++;
		
		
		delete [] friendlist;
 friendlist=temp;
		
	}
	
	void display (){
		
		for(int k=0;k<Nfriends;k++){
			cout<<friendlist[k]->name<<" have id "<<friendlist[k]->id<<endl;
			
		}
	}
	
	~User(){
		
		for(int l=0;l<Nfriends;l++){
            cout<<"memory deallocated for "<<friendlist[l]->name<<endl;
			delete friendlist[l];
		}
		
	delete[] friendlist;
	}
};
int main(){
	
	string name,fname;
	int id,fid,nf;
	cout<<"your name\n";
	cin>>name;
	cout<<"your id\n";
	cin>>id;
	cout<<"no of friends want to add\n";
	cin>>nf;
	
	User *user=  new User (id,name);
	
	
	for (int i=0;i<nf;i++){
	cout<<"friend name\n";
	cin>>fname;
	cout<<"friend id\n";
	cin>>fid;
	User *fptr= new User(fid,fname);
	user->addFriends(fptr);
		
	}
	
	user->display();
	
	
	return 0;
}