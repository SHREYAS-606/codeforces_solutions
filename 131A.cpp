#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    cin>>s;
    int n=s.size();
    int cap=0;
    int sm=0;
    for(int i=0;i<n;i++){
        if(islower(s[i])){
            sm++;
        }else{
            cap++;
        }

    }
    if(cap==n){
        for(int i=0;i<n;i++){
            s[i]=tolower(s[i]);
            
        }
        
    }else if(cap==n-1 && sm==1 && islower(s[0])){
             for(int i=0;i<n;i++){
                 if(islower(s[i])){
                    s[i]=toupper(s[i]);
                 }else{
                    s[i]=tolower(s[i]);
                 }
             }
             
    }
    cout<<s<<endl;
    return 0;
}