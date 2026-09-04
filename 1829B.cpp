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
       int maxi=0;
       int count=0;
       for(int j=0;j<a;j++){
        int k;
        cin>>k;
        if(k==0){
            count++;
            maxi=max(maxi,count);
        }else{
            count=0;
        }

       }
       cout<<maxi<<endl;
     
    }
   
   return 0;

}