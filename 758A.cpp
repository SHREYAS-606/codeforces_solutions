#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    int maxi=INT_MIN;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
        maxi=max(maxi,arr[i]);
    }
    int ans=0;
    for(int i=0;i<n;i++){
        ans+=maxi-arr[i];
    }
    cout<<ans<<endl;
    return 0;

}
