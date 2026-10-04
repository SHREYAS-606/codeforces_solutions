#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    int  n;
    cin>>n;
    int mini=INT_MAX;
    for(int i=0;i<n;i++){
         int a;
         cin>>a;
         mini=min(mini,abs(a));
     
    }
    cout<<mini<<endl;
   
   return 0;

}