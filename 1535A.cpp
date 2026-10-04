#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int  n;
    cin>>n;
    
    for(int i=0;i<n;i++){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(max(a,b)>min(c,d) && max(c,d)>min(a,b)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
     
    }
    
   return 0;

}