#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        int maxi=0;
        int p=0;
       for(int j=0;j<k;j++){
        int a,b;
        cin>>a>>b;
        if(a<=10 && maxi<b){
           maxi=b;
           p=j+1;
        }
       }
       cout<<p<<endl;
        
    }


    return 0;
}