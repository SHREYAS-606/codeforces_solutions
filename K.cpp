#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    vector<long long> a(n + 1);
    vector<long long> sum(n + 1, 0);
    vector<long long> weighted(n + 1, 0);

    for (int i = 1; i <= n; i++) {
        cin >> a[i];

        sum[i] = sum[i - 1] + a[i];
        weighted[i] = weighted[i - 1] + 1LL * i * a[i];
    }

    while (q--) {
        int l, r;
        cin >> l >> r;

        long long rangeSum = sum[r] - sum[l - 1];
        long long rangeWeighted = weighted[r] - weighted[l - 1];

        long long ans = rangeWeighted - 1LL * (l - 1) * rangeSum;

        cout << ans << '\n';
    }

    return 0;
}