#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        long long a,b;
        cin>>a>>b;
        if(a==b){
            cout<<0<<endl;
        }else{
            long long k=abs(a-b);
        
        long long ans=k/10;
        if(k %10!=0){
            ans++;
        }
        cout<<ans<<endl;
        }
    }
    return 0;
}