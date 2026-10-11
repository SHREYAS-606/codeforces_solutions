#include<iostream>
using namespace std;


int main(){
    int t;
    cin>>t;
    
    for(int i=0;i<t;i++){
        long long n;
        cin>>n;
        long long p=3;
        long long  o=4;
        while(n%p!=0){
            p+=o;
            o*=2;
        }
        cout<<n/p<<endl;
       
    }
    return 0;
}