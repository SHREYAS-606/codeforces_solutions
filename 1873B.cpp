#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++){
        int a;
        cin >> a;
        long long prod = 1;
        int mini = INT_MAX;
        int z=0;
        for (int j = 0; j< a; j++)
        {
           int p;
           cin>>p;
           if(p==0){
              if(z>=1){
                prod*=p;
              }
              z++;
           }else{
              prod=prod*p;
           }

            mini = min(p, mini);
        }
        int ans;
        if(mini==0){
            ans=prod;
        }else{

        ans = (prod / mini) * (mini + 1);
        
        }
        cout << ans << endl;
    }
    return 0;
}