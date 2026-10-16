#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> v={8, 4, 2, 6};
    int n;
    cin>>n;
    int p=n%4;
    cout<<v[p-1]<<endl;
    return 0;
}