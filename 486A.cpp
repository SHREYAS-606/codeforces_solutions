#include<iostream>
using namespace std;

int main(){
    long long x;
    cin>>x;
    int add=0;
    long long a,b;
    if(x%2==1){
        add=1;
    }
    a=(x/2)+add;
    b=x/2;
    long long ans=b*(b+1)-(a*a);

    cout<<ans<<endl;
    return 0;

}