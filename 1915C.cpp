#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution
{
public:
    static int squareRoot(long long x)
    {
        long long l = 1;
        long long r = x;

        while (l <= r)
        {
            long long mid = l + (r - l) / 2;

            if (mid == x / mid && x % mid == 0)
            {
                return 1;
            }
            else if (mid < x / mid)
            {
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
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

        long long sum = 0;

        for (int j = 0; j < a; j++)
        {
            long long k;
            cin >> k;
            sum += k;
        }

        if (Solution::squareRoot(sum) == 1)
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