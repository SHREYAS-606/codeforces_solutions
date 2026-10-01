#include <iostream>
#include <set>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        set<char> completed;
        bool valid = true;

        for (int i = 1; i < n; i++) {
            
            if (s[i] != s[i - 1]) {

                if (completed.count(s[i])) {
                    valid = false;
                    break;
                }

                
                completed.insert(s[i - 1]);
            }
        }

        if (valid)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}