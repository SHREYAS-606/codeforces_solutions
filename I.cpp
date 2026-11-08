#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    unordered_map<int,long long> m;
    m[0]=1;
    long long p=0;
    long long ans=0;
    for(int i=0;i<a;i++){
        long long k;
        cin>>k;
        p+=k;
        int r=p%b;
        if(r<0) r+=b;
        auto it=m.find(r);
        if(it!=m.end()){
            ans+=it->second;
        }
        m[r]++;   
    }
    cout<<ans<<endl;
    return 0;
}