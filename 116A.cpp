#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int sum=0;
    int mini=0;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        sum-=a;
        sum+=b;
        mini=mini>sum?mini:sum;
              
    }
    cout<<mini<<endl;
    return 0;
}