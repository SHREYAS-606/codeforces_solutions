#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<int> freq(26,0);
    int count=0;
    for(int i=0;i<n;i++){
        if(freq[tolower(s[i])-'a']==0){
            count++;
            freq[tolower(s[i])-'a']++;
        }

    }
    if(count==26){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}