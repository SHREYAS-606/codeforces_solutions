#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
       int a,b;
       cin>>a>>b;
       string blocks;
       cin>>blocks;
        int r=0;
        int l=0;
        int wc=0;
        int mini=INT_MAX;
        while(r<a){
            if(blocks[r]=='W'){
                wc++;
            }
            int len=r-l+1;
            if(len==b){
               mini=min(wc,mini);
               if(blocks[l]=='W')wc--;
               l++;
            }
            r++;
        }
        cout<<mini<<endl;
    }
    
    return 0;
}