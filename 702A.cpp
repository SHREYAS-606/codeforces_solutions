#include<iostream>
using namespace std;


int main(){
    int n;
    cin>>n;
    int ele=-1;
    int maxi=0;
    int count=0;
    for(int i=0;i<n;i++){
         int a;
         cin>>a;
         if(ele==-1 || a<=ele){
            ele=a;
            count=1;
         }else if(a>ele){
              ele=a;
              count++;
         }
         maxi=maxi>count?maxi:count;
    }
    cout<<maxi<<endl;
    return 0;
}