#include<iostream>
using namespace std;


int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int a,b;
        cin>>a>>b;
        if(a<b){
            cout<<b-a<<endl;
        }else{
            if(a%b==0){
                cout<<0<<endl;
            }else{
                int k=b*(a/b+1);

            cout<<k-a<<endl;
            }
        
        }
    }
    return 0;
}