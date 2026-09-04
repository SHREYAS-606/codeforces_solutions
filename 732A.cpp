#include<iostream>
#include<vector>
#include<string>
using namespace std;


int main(){
    int  t,s;
    cin>>t>>s;
    int count=1;
    int k=t;
    while(true){
        
        if(t%10==0 || t%10==s){
            break;
        }
        count++;
        t=t+k;
        
    }
    cout<<count<<endl;
   
    
    
    return 0;
    
}