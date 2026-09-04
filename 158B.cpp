#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> taxi(4, 0);
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        taxi[a - 1]++;
    }

    int ans = 0;

    // Groups of 4
    ans += taxi[3];

    // Groups of 3 + groups of 1
    int k = min(taxi[2], taxi[0]);
    ans += k;
    taxi[2] -= k;
    taxi[0] -= k;

    // Remaining groups of 3
    ans += taxi[2];

    // Groups of 2 + two groups of 1
    int take = min(taxi[1], taxi[0] / 2);
    ans += take;
    taxi[1] -= take;
    taxi[0] -= 2 * take;

    // Remaining groups of 2
    ans += (taxi[1] + 1) / 2;

    // Remaining groups of 1
    ans += (taxi[0] + 3) / 4;

    cout << ans << endl;

    return 0;
}