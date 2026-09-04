#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int evenCount = 0;
    int oddCount = 0;
    int evenIndex = -1;
    int oddIndex = -1;

    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;

        if (x % 2 == 0) {
            evenCount++;
            evenIndex = i;
        } else {
            oddCount++;
            oddIndex = i;
        }
    }

    if (evenCount == 1)
        cout << evenIndex << endl;
    else
        cout << oddIndex << endl;

    return 0;
}