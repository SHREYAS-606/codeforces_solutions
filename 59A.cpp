#include<iostream>
#include<vector>
#include<string>
using namespace std;


int main(){
    string t;
    cin>>t;
    int Count=0;
    for(char x:t){
        if(isupper(x)){
            Count++;
        }else{
            Count--;
        }
    }
    if(Count>0){
        for(char &x:t){
            x=toupper(x);
        }
    }else{
        for(char &x:t){
            x=tolower(x);
        }
    }
    cout<<t<<endl;
    return 0;
    
}