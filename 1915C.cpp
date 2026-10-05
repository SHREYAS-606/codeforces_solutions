#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution
{
public:
    static int squareRoot(int x)
    {
         int l=1;
         int r=x;
        while(l<=r)
         {
             int mid=l+(r-l)/2;
             if(mid*mid==x)
             {
                 return 1;
             }
             else if(mid*mid<x)
             {
                 l=mid+1;
             }
             else
             {
                 r=mid-1;
             }
         }

        return 0;
    }
};

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        int sum = 0;
        for (int j = 0; j < a; j++)
        {
            int k;
            cin >> k;
            sum += k;
        }
        if (Solution::squareRoot(sum)==1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}