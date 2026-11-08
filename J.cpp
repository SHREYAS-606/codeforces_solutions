#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    vector<long long> v(a+1);
    vector<long long> d(a+2);
    for(int i=1;i<=a;i++){
        cin>>v[i];
    }
    for(int i=0;i<b;i++){
        int l,r,x;
        cin>>l>>r>>x;
        if(l<=r){
            d[l]+=x;
            d[r+1]-=x;
        }
        else{
            d[1]+=x;
            d[r+1]-=x;
            d[l]+=x;
        }
    }
    for(int i=1;i<=a;i++){
        d[i]+=d[i-1];
        v[i]+=d[i];
    }
    for(int i=1;i<=a;i++){
        cout<<v[i]<<endl;
    }

    return 0;
}