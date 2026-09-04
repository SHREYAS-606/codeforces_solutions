#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;
    cin>>t;
    int a=0,b=0;
    vector<int> arr(t);
    for(int i=0;i<t;i++){
        cin>>arr[i];
    }
    int i=0;
    int j=t-1;
   while(i<=j){
     a+=arr[i]>arr[j]?arr[i++]:arr[j--];
     if(i<=j){
     b+=arr[i]>arr[j]?arr[i++]:arr[j--];
     }
   }
   
    cout<<a<<" "<<b<<endl;
    return 0;
}