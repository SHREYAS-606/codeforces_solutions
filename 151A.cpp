#include<iostream>
using namespace std;

int main(){
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int da=(l*k)/nl;
    int li=c*d;
    int sa=p/np;
    int ka=min({da,sa,li});
    int ans=ka/n;
    cout<<ans<<endl;
    return 0;
}