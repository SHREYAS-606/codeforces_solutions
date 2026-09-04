#include<iostream>
#include<vector>
#include<string>
using namespace std;


int main(){
    string s;
    vector<int> freq(26,0);
    cin>>s;
    for(char x:s){
         freq[x-'a']++;
    }
    int count=0;
    for(int x:freq){
        if(x!=0){
            count++;
        }
    }
    if(count%2==0){
        cout<<"CHAT WITH HER!"<<endl;
    }else{
        cout<<"IGNORE HIM!"<<endl;
    }
    return 0;
}