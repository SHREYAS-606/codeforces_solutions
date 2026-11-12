#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, x;
    cin >> n >> x;

    vector<int> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    int left = 0;
    int right = n - 1;
    int cnt = 0;

    while (left <= right) {

        if (v[left] + v[right] <= x) {
            left++;
            right--;
        } else {
            right--;
        }

        cnt++;
    }

    cout << cnt << endl;

    return 0;
}