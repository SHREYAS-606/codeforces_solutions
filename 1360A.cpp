#include<iostream>
#include<string>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        int p=min(a,b);
        int q=max(a,b);
        if(p*2>=q){
            int ans=(p*2)*(p*2);
            cout<<ans<<endl;
        }else{
            cout<<q*q<<endl;
        }
    }
    return 0;
}