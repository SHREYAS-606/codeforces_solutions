#include<iostream>
#include<string>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        int k=s.length();
        string ans="";
        for(int i=0;i<k;i++){
               if(i==0 || i==k-1){
                   ans+=s[i];
               }else{
                ans+=s[i];
                i++;
               }
        }
        cout<<ans<<endl;
    }
    return 0;
}