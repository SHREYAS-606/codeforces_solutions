#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
   int q;
    cin >> q;

    while (q--) {
        int m;
        cin >> m;

        int low = 0;
        int high = n - 1;
        int ans = 0;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (arr[mid] <= m) {
                ans = mid + 1;
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }

        cout << ans << endl;
    }

    return 0;
}