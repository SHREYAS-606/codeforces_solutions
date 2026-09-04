#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    int  n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        if(a%3){
            cout<<"First"<<endl;
        }else{
            cout<<"Second"<<endl;
        }
    }
   
   return 0;

}