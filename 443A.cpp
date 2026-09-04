#include<iostream>
#include<string>
#include<vector>
#include<unordered_set>
using namespace std;

int main(){
    unordered_set<char> st;
    string s;
    getline(cin,s);
    
    for(char x:s){
        if(isalpha(x)){
            st.insert(x);
        }
        
    }
    cout<<st.size()<<endl;

    return 0;
}