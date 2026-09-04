#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    vector<int> arr(a);

    for (int i = 0; i < a; i++) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    long double maxi = 0;

    maxi = max(maxi, (long double)arr[0]);
    maxi = max(maxi, (long double)(b - arr[a - 1]));

    for (int i = 1; i < a; i++) {
        maxi = max(maxi, (long double)(arr[i] - arr[i - 1]) / 2.0);
    }

    cout << maxi << endl;

    return 0;
}