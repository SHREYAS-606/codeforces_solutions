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
        int sum=a%10+a/10;
        cout<<sum<<endl;
    }
   
   return 0;

}