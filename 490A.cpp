#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> programming;
    vector<int> maths;
    vector<int> pe;

    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;

        if (x == 1)
            programming.push_back(i);
        else if (x == 2)
            maths.push_back(i);
        else
            pe.push_back(i);
    }

    int teams = min({programming.size(), maths.size(), pe.size()});

    cout << teams << endl;

    for (int i = 0; i < teams; i++) {
        cout << programming[i] << " "
             << maths[i] << " "
             << pe[i] << endl;
    }

    return 0;
}