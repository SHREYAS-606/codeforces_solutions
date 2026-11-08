#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    long long sum=0;
    for(int i=0;i<t;i++){
        int a;
        cin>>a;
        sum+=a;
        cout<<sum<<endl;
    }
    return 0;
}