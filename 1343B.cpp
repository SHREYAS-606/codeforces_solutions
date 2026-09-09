#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        if (n % 4 != 0) {
            cout << "NO\n";
            continue;
        }

        cout << "YES\n";

        int half = n / 2;

        
        for (int i = 1; i <= half; i++) {
            cout << 2 * i << " ";
        }

        
        for (int i = 1; i < half; i++) {
            cout << 2 * i - 1 << " ";
        }

        
        cout << 3 * half - 1 << "\n";
    }

    return 0;
}