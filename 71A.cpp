#include<iostream>
#include<vector>
#include<string>
using namespace std;


int main(){
    int  t;
    cin>>t;
    for(int i=0;i<t;i++){
        string s;
        cin>>s;
        int n=s.length();
        if(n<=10){
            cout<<s<<endl;
        }else{
            string ans="";
            ans+=s[0];
            ans+=to_string(n-2);
            ans+=s[n-1];
            cout<<ans<<endl;
        }
    }
    return 0;
    
}