#include<iostream>
using namespace std;


int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int a,b,c;
        cin>>a>>b>>c;
        int sum=a+b+c;
        int maxi=max({a,b,c});
        if(maxi==sum-maxi){
            cout<<"YES"<<endl;
        }else{
             cout<<"NO"<<endl;
        }
        
       
    }
    return 0;
}