#include<iostream>
#include<vector>
using std::vector;
using namespace std;
int main(){
    vector<int>mtvec;
    mtvec={1,2,3,4,5,6,7,8};
    for(int i:mtvec){
        cout<<i<<endl;
    }
    return 0;
}