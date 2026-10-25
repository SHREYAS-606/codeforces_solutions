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
       string a;
       cin>>a;
       int p;
       cin>>p;
       string b;
       cin>>b;
       string c;
       cin>>c;
       string l="";
       string r="";
       for(int i=0;i<p;i++){
        if(c[i]=='V'){
            l=b[i]+l;
        }else{
            r+=b[i];
        }
        
       }
       cout<<l+a+r<<endl;
    }
     
    return 0;
    
}