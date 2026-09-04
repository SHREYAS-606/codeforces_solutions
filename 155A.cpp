#include<iostream>
#include<string>
#include<vector>
#include<unordered_set>
using namespace std;

int main(){
     int n;
     cin>>n;
     int a;
     cin>>a;
     int maxi=a;
     int mini=a;
     
     int amazing=0;
     for(int i=1;i<n;i++){
        cin>>a;
        if(a>maxi){
            amazing++;
            maxi=a;
        }
        if(a<mini){
            amazing++;
            mini=a;
        }
       
     }
     cout<<amazing<<endl;

    return 0;
}