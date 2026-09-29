#include<iostream>
#include<string>
using namespace std;

int main(){
    string a;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        cout<<(a[0]-'0')+(a[2]-'0')<<endl;
    }
    return 0;
}