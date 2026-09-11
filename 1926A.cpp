#include<iostream>
#include<string>

using namespace std;

int main(){
     int n;
     cin>>n;
     for(int i=0;i<n;i++){
        string s;
        cin>>s;
        int cnt=0;
        for(int i=0;i<n;i++){
            if(s[i]=='A'){
                cnt++;
            }
        }
        if(cnt>=3){
            cout<<'A'<<endl;
        }else{
            cout<<'B'<<endl;
        }
     }
     return 0;

}