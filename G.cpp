#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<char> a(n);

    int totalH = 0, totalP = 0, totalS = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];

        if (a[i] == 'H') totalH++;
        else if (a[i] == 'P') totalP++;
        else totalS++;
    }

    int leftH = 0, leftP = 0, leftS = 0;
    int ans = 0;

    
    for (int i = 0; i <= n; i++) {

        int rightH = totalH - leftH;
        int rightP = totalP - leftP;
        int rightS = totalS - leftS;

        
        int leftBest = max({
            leftP,
            leftH, 
            leftS  
        });

       
        int rightBest = max({
            rightP, 
            rightH, 
            rightS  
        });

        ans = max(ans, leftBest + rightBest);

        
        if (i < n) {
            if (a[i] == 'H') leftH++;
            else if (a[i] == 'P') leftP++;
            else leftS++;
        }
    }

    cout << ans << '\n';

    return 0;
}