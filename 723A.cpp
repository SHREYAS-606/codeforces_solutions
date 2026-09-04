#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    int  a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;
    int maxi=max({a,b,c});
    int mini=min({a,b,c});
    int sum=a+b+c;
    int mid=sum-maxi-mini;
    int ans=(maxi-mid)+(mid-mini);
    cout<<ans<<endl;
   
   return 0;

}