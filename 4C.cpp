#include<iostream>
#include<unordered_map>
#include<algorithm>
#include<string>
using namespace std;

int main(){
    int n;
    cin>>n;
    unordered_map<string,int> mpp;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        string st;
        if(mpp.find(s)!=mpp.end()){
            string k=to_string(mpp[s]);
            st=s+k;
        }else{
           st="OK";
        }
        mpp[s]++;
        cout<<st<<endl;
    }
    return 0;
}