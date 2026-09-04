#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    string s;
    cin>>s;
    vector<int> ans(3,0);
    for(char x:s){
       ans[x-'0'-1]++;
    }
    string an="";
    for(int i=0;i<3;i++){
        for(int j=0;j<ans[i];j++){
            if(an.size()!=0){
                an+='+';
            }
            char c=(i+1)+'0';
            an+=c;
        }

    }
    cout<<an<<endl;
    


    
    return 0;

}