#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        long long a,b;
        cin>>a>>b;
        long long k=a-1;
        long long p=b/k;
        long long f=a*p;
        if(b%k==0){
            cout<<f-1<<endl;
        }else{
            cout<<f+(b%k)<<endl;
        }
    }
    return 0;
}