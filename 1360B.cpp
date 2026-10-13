
#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <cstdlib>
using namespace std;

int main() {
    int n;
    cin >> n;

    while (n--) {
        int s;
        cin >> s;

        vector<int> arr(s);

        for (int i = 0; i < s; i++) {
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end());

        int min_val = INT_MAX;

        for (int i = 1; i < s; i++) {
            min_val = min(min_val, arr[i] - arr[i - 1]);
        }

        cout << min_val << endl;
    }

    return 0;
}
