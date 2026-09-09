#include <iostream>
#include <string>
#include <vector>
#include <unordered_set>
using namespace std;

int main()
{
    int a, b;

    cin >> a >> b;
    int ans = 0;
    for (int i = 0; i < a; i++)
    {
        int k;
        cin >> k;
        if (k + b <= 5)
        {
            ans++;
        }
    }
    cout << ans / 3 << endl;

    return 0;
}