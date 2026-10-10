#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int ans = a;

    while (a >= b) {
        int newCandles = a / b;
        ans += newCandles;
        a = a % b + newCandles;
    }

    cout << ans << endl;

    return 0;
}