#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    int sum=0;
    for(int i=0;i<t;i++){
        int a;
        cin>>a;
        sum+=a;

    }
    double ans=sum/(double)t;
    cout<<ans<<endl;
    return 0;
}