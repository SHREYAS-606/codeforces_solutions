#include<iostream>
using namespace std;

int main(){
    long long a,b;
    long long ans;
    cin>>a>>b;
    long long even=0;
    long long odd=0;
    even=a/2;
    if(a%2==0){
        odd=a/2;
    }else{
        odd=a/2+1;
    }
    if(b<=odd){
        ans=-1+2*b;
        
    }else{
        b=b-odd;
        ans=0+2*b;
        
    }
    cout<<ans<<endl;
    return 0;

}