#include<iostream>

using namespace std;

int main(){
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    int ans1=(n/m)*b+(n%m)*a;
    int ans2=n*a;
  
    cout<<min(ans1,ans2)<<endl;

    return 0;
}