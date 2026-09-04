#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    int c=min(a,b);
    int k=abs(a-b)/2;
    cout<<c<<" "<<k<<endl;

   
   return 0;

}