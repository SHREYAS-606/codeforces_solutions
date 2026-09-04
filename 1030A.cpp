#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;
    cin>>t;
    int ans=0;
    for(int i=0;i<t;i++){
        int k;
        cin>>k;
        ans|=k;

    }
    if(ans==0){
        cout<<"EASY"<<endl;
    }else{
        cout<<"HARD"<<endl;
    }
    return 0;
}