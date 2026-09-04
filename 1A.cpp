#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n;
    int m;
    int a;
    cin>>n>>m>>a;
    long long ans=ceil((double)n/a)*ceil((double)m/a);
    cout<<ans<<endl;
    return 0;
}