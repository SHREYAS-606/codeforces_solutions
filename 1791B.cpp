#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        string s;
        cin>>s;
        int x=0;
        int y=0;
        int is=0;
        for(int j=0;j<k;j++){
            if(s[j]=='R'){
                x++;
            }
            if(s[j]=='L'){
                x--;
            }
            if(s[j]=='U'){
                y++;
            }
            if(s[j]=='D'){
                y--;
            }
            if(x==1 && y==1){
                is=1;
            }
        }
        if(is){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}