#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    vector<int> arr(4);
    int maxi=0;
    for(int i=0;i<4;i++){
        cin>>arr[i];
        maxi=maxi>arr[i]?maxi:arr[i];
    }
    for(int i=0;i<4;i++){
        if(arr[i]!=maxi){
            cout<<maxi-arr[i]<<endl;
        }

    }
    
    return 0;
}