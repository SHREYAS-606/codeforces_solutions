#include<iostream>
#include<vector>
#include<string>
using namespace std;


int main(){
   long long t;
   cin>>t;
   int count=0;
   while(t>0){
       if(t%10==4 || t%10==7){
           count++;
       }
       t=t/10;
   }
   if (count == 0) {
    cout << "NO";
    return 0;
}
   while(count>0){
       if(count%10!=4 && count%10!=7){
           cout<<"NO"<<endl;
           return 0;
       }
       count=count/10;
   }
   cout<<"YES"<<endl;
   return 0;
}