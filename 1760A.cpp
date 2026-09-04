#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a,b,c;
        cin>>a>>b>>c;
        int mini=min({a,b,c});
        int maxi=max({a,b,c});
        int md=a+b+c-mini-maxi;
        cout<<md<<endl;
    }
    return 0;
}