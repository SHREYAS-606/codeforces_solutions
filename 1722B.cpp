#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int  n;
    cin>>n;
    
    for(int i=0;i<n;i++){
       int c;
       cin>>c;
       string a,b;
       cin>>a>>b;
       int is=1;

       for(int j=0;j<c;j++){
           if(a[j]!=b[j] && !((a[j]=='G' && b[j]=='B') || (a[j]=='B' && b[j]=='G'))){
               is=0;
               break;
           }
       }
       if(is){
           cout<<"YES"<<endl;
       }
       else{
           cout<<"NO"<<endl;
       }
     
    }
    
   return 0;

}