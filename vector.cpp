#include<iostream>
#include<vector>
using std::vector;
using namespace std;
template <class A>
void display(vector<A>v1){
    for(int j=0;j<v1.size();j++){
        // cout<<v1[j]<<"\t";
        //below line and above line works same 
        cout<<v1.at(j)<<"\t";
    }
    cout<<endl;
}
int main(){
    vector<int> v1;
    int sz,element;
    int make(54);//works same as the make =54;
    cout<<make<<endl;
    cout<<"how many elements you wanrt to enter "<<endl;
    cin>>sz;
    for(int i=0;i<sz+1;i++){
        cin>>element;
        v1.push_back(element);
    }
    display(v1);
    vector<int>::iterator iter=v1.end();
    //inserts value at the second last 
    v1.insert(iter-1,866);
    display(v1);
    //If I want to add value multiple time so i can do it is
    v1.insert(iter-1,50 ,989);
    display(v1);
    vector<double> ma1(5,14);
    display(ma1);
    return 0;
}