#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    int  n;
    cin>>n;
    for(int i=0;i<n;i++){
       int a,b,c;
       cin>>a>>b>>c;
       int sum=a+b+c; 
       if(sum-min({a,b,c})>=10){
        cout<<"YES"<<endl;
       }else{
        cout<<"NO"<<endl;
       }
    }
   
   return 0;

}