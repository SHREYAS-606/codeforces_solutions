#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    map<string, int> mp;

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        mp[s]++;
    }

    string ans;
    int maxi = 0;

    for (auto x : mp) {
        if (x.second > maxi) {
            maxi = x.second;
            ans = x.first;
        }
    }

    cout << ans << endl;

    return 0;
}