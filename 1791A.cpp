#include<iostream>
#include<unordered_set>
using namespace std;


int main(){
    int t;
    cin>>t;
    unordered_set<char> st={'c','o','d','e','f','r','s'};
    for(int i=0;i<t;i++){
       char c;
       cin>>c;
       if(st.find(c)!=st.end()){
        cout<<"YES"<<endl;
       }else{
        cout<<"NO"<<endl;
       }    
    }
    return 0;
}