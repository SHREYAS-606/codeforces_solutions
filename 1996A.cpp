#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int k;
        cin>>k;
        int ans=k/4;
        k=k%4;
        ans+=k/2;
        cout<<ans<<endl;

        

        
    }
    return 0;
}