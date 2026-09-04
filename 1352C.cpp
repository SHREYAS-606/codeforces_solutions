#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        int k=a-1;
        int p=b/k;
        int f=a*p;
        if(b%k==0){
            cout<<f-1<<endl;
        }else{
            cout<<f+(b%k)<<endl;
        }
    }
    return 0;
}