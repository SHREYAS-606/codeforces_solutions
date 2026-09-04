#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    sort(arr.rbegin(),arr.rend());
    int csum=0;
    int count=0;
    for(int x:arr){
        csum+=x;
        count++;
        if(csum>sum-csum){
            break;
        }
    }
    cout<<count<<endl;
    return 0;

}