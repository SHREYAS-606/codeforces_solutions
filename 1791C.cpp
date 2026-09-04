#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        string s;
        cin>>s;
        int r=a-1;
        int l=0;
        int ans=0;
        while(l<=r){
            int o=s[l]-'0';
            int p=s[r]-'0';
            if(o^p==0){
                break;
            }
            l++;
            r--;

        }
        if(n%2==0 && l==r){
            cout<<0<<endl;
        }else{
            cout<<r-l+1<<endl;
        }
    }
    return 0;
}