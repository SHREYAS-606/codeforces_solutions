#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        int ans=(a*b)/2;
        if(a*b%2){
            ans++;
        }
        cout<<ans<<endl;

    }
    return 0;
}