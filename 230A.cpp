#include<iostream>
#include<map>
using namespace std;

int main(){
    int s,n;
    cin>>s>>n;
    map<int,int> mpp;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        mpp[a]+=b;

    }
    for(auto &x:mpp){
        if(s<=x.first){
            cout<<"NO"<<endl;
            return 0;
        }else{
            s=s+x.second;
        }
    }
    cout<<"YES"<<endl;
    return 0;

}