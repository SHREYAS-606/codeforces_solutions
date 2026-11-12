#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;

int main(){
    long long a,b;
    cin>>a>>b;
    priority_queue<pair<long long,long long>> pq;
    for(int i=0;i<a;i++){
        long long n,k;
        cin>>n>>k;
        
        pq.push({n,k});
    }
    long long  ans=0;
    while(b>0 && !pq.empty()){
        auto p=pq.top();
        pq.pop();
        long long n=p.first;
        long long k=p.second;
        if(b<=k){
            ans+=b*n;
            b=0;
        }else{
            ans+=k*n;
            b-=k;
        }
    }
    cout<<ans<<endl;
    
    return 0;
}