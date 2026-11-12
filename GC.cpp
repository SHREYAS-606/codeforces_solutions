#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
           cin>>v[i];
    }
    int count=0;
    sort(v.begin(),v.end());
    int ans=0;
    for(int i=0;i<n;i++){
        count++;
        if(i==n-1){
            
          ans+=min(count,2*n-v[i]);
          count-=2*n-v[i];
          
        }else if((v[i+1]-v[i])>1){

          ans+=min(count,v[i+1]-v[i]-1);
          count-=(v[i+1]-v[i]-1);
          
        }
        count=max(count,0);
        
    }
    cout<<ans<<endl;
    return 0;
}