#include<iostream>
#include<vector>
#include<string>
using namespace std;


int main(){
    int n,k;
    cin>>n>>k;
    int minwidth=0;
    for(int i=0;i<n;i++){
        int j;
        cin>>j;
        if(j>k){
            minwidth+=2;
        }else{
            minwidth+=1;
        }

    }
    cout<<minwidth<<endl;
    return 0;
    
}