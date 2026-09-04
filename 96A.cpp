#include<iostream>
#include<vector>
#include<string>
using namespace std;


int main(){
   string s;
   cin>>s;
   int n=s.length();
   int count=0;
   int ele=-1;
    for(int i=0;i<n;i++){
        if(ele==-1){
            ele=s[i]-'0';
            count=1;
        }else{
            if(ele==s[i]-'0'){
                count++;
                if(count==7){
                    cout<<"YES"<<endl;
                    return 0;
                }
            }else{
                ele=s[i]-'0';
                count=1;
            }
        }

    }
    cout<<"NO"<<endl;
   return 0;
}