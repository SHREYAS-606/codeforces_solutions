#include<iostream>
using namespace std;

int main(){
    string s;
    cin>>s;
    int n=s.size();
    string ans="";
    int count=0;
    for(int i=0;i<n;i++){
        if(s[i]=='.'){
            ans+="0";
        }else if(s[i]=='-'){
            if(s[i+1]=='.'){
                ans+="1";
            }else{
                ans+="2";
            }
            i++;
        }
    }
    cout<<ans<<endl;
    return 0;
}