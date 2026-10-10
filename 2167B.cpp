#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
       int k;
       cin>>k;
        string a,b;
         cin>>a>>b;
         sort(a.begin(),a.end());
         sort(b.begin(),b.end());
         if(a==b){
             cout<<"YES"<<endl;
         }else{
             cout<<"NO"<<endl;
         }

    }
     
    return 0;
    
}