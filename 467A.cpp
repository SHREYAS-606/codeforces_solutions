#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;
    cin>>t;
    int count=0;
    for(int i=0;i<t;i++){
        int a,b;
        cin>>a>>b;
        if(abs(a-b)>=2){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}