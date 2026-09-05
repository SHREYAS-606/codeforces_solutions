#include <iostream>
#include<vector>
using namespace std;

int main() {
    int a,b;
    cin>>a>>b;
    vector<int> v(a);
    for(int i=0;i<a;i++){
          cin>>v[i];
    }
    int r=0;
    int l=0;
    int maxi=0;
    int sum=0;
    while(r<a){
        sum+=v[r];
        while(sum>b){
            sum-=v[l];
            l++;
        }
        maxi=max(maxi,r-l+1);
        r++;
    }

    return 0;
}