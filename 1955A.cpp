
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, a, b;
        cin >> n >> a >> b;

        int cost = 0;

        if (b < 2 * a) {
            cost = (n / 2) * b + (n % 2) * a;
        } else {
            cost = n * a;
        }

        cout << cost << '\n';
    }

    return 0;
}
