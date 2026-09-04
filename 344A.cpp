#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    string ele="";
    int group=0;
    for(int i=0;i<t;i++){
        string s;
        cin>>s;
        if(ele==""){
            ele=s;
            group++;
        }else{
            if(s==ele){
                continue;
            }else{
                group++;
                ele=s;
            }
        }

         
    }
    cout<<group<<endl;
    return 0;
}