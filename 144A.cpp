#include <iostream>
#include<vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int &x : a) cin >> x;

    int mx = *max_element(a.begin(), a.end());
    int mn = *min_element(a.begin(), a.end());

    int maxi = 0, mini = n - 1;

    for (int i = 0; i < n; i++) {
        if (a[i] == mx) {
            maxi = i;
            break;
        }
    }

    for (int i = n - 1; i >= 0; i--) {
        if (a[i] == mn) {
            mini = i;
            break;
        }
    }

    int ans = maxi + (n - 1 - mini);

    if (maxi > mini)
        ans--;

    cout << ans << endl;

    return 0;
}