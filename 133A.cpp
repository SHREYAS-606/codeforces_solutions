#include<iostream>
#include<vector>

using namespace std;

int main(){
   
    string s;
    cin>>s;
    
    for(char x:s){
        if(x=='H' || x=='Q' ||x=='9'){
            cout<<"YES"<<endl;
            return 0;
        }
        

    }
    
        cout<<"NO"<<endl;
    
    return 0;
}