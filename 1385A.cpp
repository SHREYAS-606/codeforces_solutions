#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
       int x, y, z;
        cin >> x >> y >> z;

        int mx = max({x, y, z});

        
        if ((x == mx) + (y == mx) + (z == mx) < 2) {
            cout << "NO\n";
            continue;
        }

        int a = min(x, y);
        int b = min(x, z);
        int c = min(y, z);

        cout << "YES\n";
        cout << a << " " << b << " " << c << "\n";

    }
    return 0;
}