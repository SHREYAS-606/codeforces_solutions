
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t, k;
    cin >> t >> k;

    vector<long long> v(t + 1, 0);
    vector<long long> d(t+2,0);

    for (int i = 1; i <= t; i++) {
       
        cin >> v[i];
    }
    

    while (k--) {
        int l, r;
        long long x;
        cin >> l >> r >> x;

        d[l] += x;
        d[r + 1] -= x;
    }

     long long sum = 0;

    for (int i = 1; i <= t; i++) {
        sum += d[i];
        v[i] += sum;

        cout << v[i] << " ";
    }

    return 0;
}