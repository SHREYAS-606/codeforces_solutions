#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    
    vector<int> bill={1,5,10,20,100};
    int n;
    cin>>n;
    int count=0;
    for(int i=4;i>=0;i--){
        count+=n/bill[i];
        n=n%bill[i];
    }
    cout<<count<<endl;

    return 0;
}