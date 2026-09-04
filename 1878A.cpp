#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    int  n;
    cin>>n;
    for(int i=0;i<n;i++){
       int a,b;
       cin>>a>>b;
       int k;
       int count=0;
       for(int i=0;i<a;i++){
          
          cin>>k;
          if(k==b){
            count++;
             
             
          }
       }
       if(count==0){
        cout<<"NO"<<endl;
       }else{
        cout<<"YES"<<endl;
       }
    }
   
   return 0;

}