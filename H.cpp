#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    unordered_map<int,int> m;
    m[0]=1;
    int p=0;
    int ans=0;
    for(int i=0;i<a;i++){
        int k;
        cin>>k;
        p+=k;
        auto it=m.find(p-b);
        if(it!=m.end()){
            ans+=it->second;
        }
        m[p]++;   
    }
    cout<<ans<<endl;
    return 0;
}