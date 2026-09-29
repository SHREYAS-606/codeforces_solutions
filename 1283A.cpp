#include<iostream>
using namespace std;

int main(){
    int h,m;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>h>>m;
        cout<<(23-h)*60+(60-m)<<endl;
    }

    return 0;

}