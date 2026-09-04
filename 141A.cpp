#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    string a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;
    vector<int> freq(26,0);
   for(char x:a){
    freq[x-'A']++;
   }
    for(char y:b){
    freq[y-'A']++;
   }
   for(char x:c){
    freq[x-'A']--;
   }
   for(int x:freq){
    if(x!=0){
        cout<<"NO"<<endl;return 0;

    }
   }
   cout<<"YES"<<endl;
   return 0;

}