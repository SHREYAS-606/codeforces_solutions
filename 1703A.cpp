#include<iostream>
#include<string>
using namespace std;

int main(){
    int t;
    cin>>t;
    string y="yes";
    for(int i=0;i<t;i++){
        string st;
        cin>>st;
        for(int i=0;i<3;i++){
           st[i]=tolower(st[i]);
        }
        if(st==y){
        cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}