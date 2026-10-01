#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int maxi=INT_MIN;
        int mini=INT_MAX;
        int k;
        cin>>k;
        for(int j=0;j<k;j++){
              int p;
              cin>>p;
              mini=min(mini,p);
              maxi=max(maxi,p);
              
        }
        cout<<maxi-mini<<endl;
    }
    return 0;
}