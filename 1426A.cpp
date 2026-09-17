#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        int ans = 1;
        a -= 2;
        if (a > 0)
        {
            ans += a / b;
            if (a % b)
            {
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}