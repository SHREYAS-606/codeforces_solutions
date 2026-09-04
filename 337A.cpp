#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main(){
    int a,b;
    cin>>a>>b;

    vector<int> arr(b);
    
    for(int i=0;i<b;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    int i=0;
    int j=a-1;
    int mini=INT_MAX;
    while(j<b){
        int k=arr[j]-arr[i];
        mini=mini<k?mini:k;
        i++;
        j++;

    }

    cout<<mini<<endl;

    return 0;

}