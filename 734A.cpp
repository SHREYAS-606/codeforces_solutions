#include<iostream>
#include<vector>
#include<string>
using namespace std;


int main(){
    int  t;
    cin>>t;
    string s;
    cin>>s;
    int alen=0;
    int dlen=0;
    for(char &x:s){
         if(x=='A'){
            alen++;
         }else{
            dlen++;
         }
    }
     if(alen>dlen){
        cout<<"Anton"<<endl;
     }else if(alen<dlen){
        cout<<"Danik"<<endl;
     }else{
        cout<<"Friendship"<<endl;
     }
    
    
    return 0;
    
}