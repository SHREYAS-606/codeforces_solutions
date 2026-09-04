#include<iostream>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    long long ans=0;
    long long last=1;
    
    for(int i=0;i<b;i++){
        long long k;
        cin>>k;
        if(k>=last){
            ans+=k-last;
        }else{
            ans+=a-last+k;
        }
        last=k;    
    }
    cout<<ans<<endl;
   
    return 0;
}