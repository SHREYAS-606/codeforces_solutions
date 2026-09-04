#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    int  n;
    cin>>n;
    for(int i=0;i<n;i++){
      int a,b;
      cin>>a>>b;
      int k;
      int last=0;
      int maxi=0;
      for(int j=0;j<a;j++){
        cin>>k;
        maxi=max(maxi,k-last);
        last=k;
      }
      maxi=max(maxi,2*(b-last));

      cout<<maxi<<endl;

     
    }
   
   return 0;

}