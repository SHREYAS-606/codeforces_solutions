#include<iostream>
#include<vector>
using namespace std;

class 

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    int sum=0;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        sum+=a;
        v[i]=sum;
    }

    return 0;
}