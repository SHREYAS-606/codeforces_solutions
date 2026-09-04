#include<iostream>
#include<string>
#include<vector>
#include<unordered_set>
using namespace std;

int main(){
     int n;
     cin>>n;
     int rc=0;
     int count=0;
     for(int i=0;i<n;i++){
        int a;
        cin>>a;
        if(a==-1 && rc==0){
            count++;
        }else if(a==-1 && rc!=0){
            rc--;
        }else{
            rc+=a;
        }
     }
     cout<<count<<endl;

    return 0;
}