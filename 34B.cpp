#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    vector<int> v(a);
    for(int i=0;i<a;i++){
        cin>>v[i];
    }
    int ans=0;
    int maxi=0;
    sort(v.begin(),v.end());
    for(int i=0;i<b;i++){
        if(v[i]<0){
            ans+=abs(v[i]);
            maxi=(maxi,ans);
        }
    }
    cout<<maxi<<endl;
    return 0;
}