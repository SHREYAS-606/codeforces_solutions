#include<iostream>

using namespace std;

int main(){
    string s;
    cin>>s;
    int n=s.size();
    int i=0;
    string ans="";
    while(i<n){
        if(ans.back()!=' ' && ans.size()!=0){
                ans+=' ';
        }
         while(i<n && (s[i]!='W'||s[i+1]!='U'||s[i+2]!='B')){
            
            ans+=s[i];
            i++;
         }
         i=i+3;
    }
    cout<<ans<<endl;
    return 0;
}