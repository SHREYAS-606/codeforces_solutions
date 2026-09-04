#include<iostream>
#include<string>

using namespace std;

bool isvowel(char k){
    return k=='a'|| k=='e'||k=='i'||k=='o'||k=='u'|| k=='y';
}

int main(){
    string s;
    cin>>s;
    string ans="";
    for(char x:s){
        if(isalpha(x) && !isvowel(tolower(x)) ){
            ans+='.';
            ans+=tolower(x);
        }
    }
    cout<<ans<<endl;
    return 0;
}