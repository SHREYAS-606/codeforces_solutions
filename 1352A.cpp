#include<iostream>
using namespace std;


int main(){
    int t;
    cin>>t;
    int count;
    for(int i=0;i<t;i++){
        int a;
        cin>>a;
        int k=a;
        count=0;
        while(k>0){
            if(k%10!=0){
               count++;
            }
            k=k/10;
        }

        int n=a;
        int mul=1;
        while(n>0){
            
            if(n%10!=0){
                cout<<" "<<(n%10)*mul;
            }

            n/=10;
            mul*=10;

        }

        cout << '\n';
       
    }
    return 0;
}