#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string s="";
        for(int i=0;i<8;i++){
            string t;
            cin>>t;
            for(int j=0;j<8;j++){
                if(t[j]!='.'){
                    s+=t[j];
                }
            }
        }
        cout<<s<<endl;
    }


    return 0;
}