#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
       int k;
       cin>>k;
       string s;
       cin>>s;
       int st=-1;
       int en=-1;
       for(int j=0;j<k;j++){
           if(s[j]=='B' && st==-1){
            st=j;
            en=j;
           }else if(s[j]=='B' && st!=-1){
             en=j;
           }
       }
       cout<<en-st+1<<endl;
    }



    return 0;
}