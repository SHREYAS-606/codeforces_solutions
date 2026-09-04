#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> day(7,0);
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        day.push_back(a);
    }
    int i=0;
    while(n>day[i]){
        n=n-day[i];
        i=(i+1)%7;
    }
    cout<<i+1<<endl;
    return 0;
}