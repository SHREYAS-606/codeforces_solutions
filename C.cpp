
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t, k;
    cin >> t >> k;

    vector<long long> v(t + 1, 0);

    for (int i = 1; i <= t; i++) {
        int a;
        cin >> a;

        v[i] = v[i - 1] ^ a;
    }

    for (int i = 0; i < k; i++) {
        int l, r;
        cin >> l >> r;

        cout << (v[r] ^ v[l - 1]) <<endl;
    }

    return 0;
}