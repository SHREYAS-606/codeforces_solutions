#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
       int n;
       cin>>n;
       vector<int> v(26,0);

       for(int J=0;J<n;J++){
        int l;
        cin>>l;
        string s;
        cin>>s;
        int ans=0;
        for(int i=0;i<l;i++){
            if(v[s[i]-'A']==0){
                v[s[i]-'A']+=2;
                ans+=2;
            }else{
                v[s[i]-'A']++;
                ans++;
            }
        }
        cout<<ans<<endl;
        fill(v.begin(), v.end(), 0);

       }
       return 0;
}