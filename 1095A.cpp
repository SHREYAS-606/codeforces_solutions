#include<iostream>
#include<string>
using namespace std;

int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int i=0;
    int add=1;
    string ans="";
    while(i<n){
         ans+=s[i];
         i=i+add;
         add++;

    }
    cout<<ans<<endl;
    return 0;
}