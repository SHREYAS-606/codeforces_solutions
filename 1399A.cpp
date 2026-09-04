#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        vector<int> arr(k);
        for(int j=0;j<k;j++){
            cin>>arr[j];
        }
         sort(arr.begin(), arr.end());

        bool possible = true;

        for (int j = 1; j < k; j++) {
            if (arr[j] - arr[j - 1] > 1) {
                possible = false;
                break;
            }
        }
        cout << (possible ? "YES\n" : "NO\n");
        

       
    }
    return 0;
}