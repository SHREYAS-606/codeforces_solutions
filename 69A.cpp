#include<iostream>
#include<vector>
#include<string>
using namespace std;


int main(){
   int t;
   cin>>t;
   int xCoord=0;
   int yCoord=0;
   int zCoord=0;
   for(int i=0;i<t;i++){
        int x,y,z;
        cin>>x>>y>>z;
        xCoord+=x;
        yCoord+=y;
        zCoord+=z;
   }
   if(xCoord==0 && yCoord==0 && zCoord==0){
        cout<<"YES"<<endl;
   }else{
        cout<<"NO"<<endl;
   }
   return 0;
}