#include<iostream>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    int l=240-b;
    int k=0;
    int i=1;
    for( i;i<=a;i++){
        k=k+5*i;
        if(k>l){
            break;
        }
        
    }
    cout<<i-1<<endl;
    return 0;
}