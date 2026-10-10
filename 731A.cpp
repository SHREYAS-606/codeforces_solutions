#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    string s;
    cin >> s;

    char cur = 'a';
    int ans = 0;

    for (char c : s) {
        int diff = abs(cur - c);

        ans += min(diff, 26 - diff);

        cur = c;
    }

    cout << ans << endl;

    return 0;
}