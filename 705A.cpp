#include<iostream>
#include<string>
using namespace std;

int main(){
    string b="I love ";
    string a="I hate ";
    int t;
    cin>>t;
    string ans="";
    for(int i=1;i<=t;i++){
        if(i%2){
            ans+=a;
        }else{
            ans+=b;
        }
        if(i==t){
            ans+="it";
        }else{
            ans+="that ";
        }

    }
    cout<<ans<<endl;

    return 0;
}