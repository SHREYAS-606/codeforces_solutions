#include <iostream>
using namespace std;

int main() {
    int n, m, a, b;
    cin >> n >> m >> a >> b;

    int ans1 = (n / m) * b + (n % m) * a;
    int ans2 = n * a;
    int ans3 = ((n + m - 1) / m) * b;

    cout << min(ans1, min(ans2, ans3)) << endl;

    return 0;
}