#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    int  n;
    cin>>n;
    for(int i=0;i<n;i++){
       int a;
       cin>>a;
       int sum=0;
       for(int j=0;j<a;j++){
        int k;
        cin>>k;
        sum+=k;


       }
       if(sum%2){
        cout<<"NO"<<endl;

       }else{
        cout<<"YES"<<endl;
       }
     
    }
   
   return 0;

}