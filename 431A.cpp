#include<iostream>
#include<string>
#include<vector>
#include<unordered_set>
using namespace std;

int main(){
    vector<int> v(4);
    for(int i=0;i<4;i++){
        cin>>v[i];
    }
    int ans=0;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        ans+=v[s[i]-'1'];
    }
    cout<<ans<<endl;


    return 0;
}