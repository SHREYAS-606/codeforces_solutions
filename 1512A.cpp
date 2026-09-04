#include<iostream>
#include<unordered_set>
using namespace std;


int main(){
    int t;
    cin>>t;
    
    for(int i=0;i<t;i++){
       int c;
       cin>>c;
       int ele1=-1;
       int ele2=-1;
       int cnt1=0;
       int cnt2=0;
       int in1;
       int in2;
       for(int j=0;j<c;j++){
           int k;
           cin>>k;
           if(ele1==-1){
             ele1=k;
             cnt1++;
             in1=j;
           }else if(ele1==k){
            cnt1++;
            in1=j;
           }else if(ele2==-1){
              ele2=k;
              cnt2++;
              in2=j;
           }else if(ele2==k){
            cnt2++;
            in2=j;
           }
       }
       if(cnt1==1){
        cout<<in1+1<<endl;
       }else{
        cout<<in2+1<<endl;
       }

    }
    return 0;
}