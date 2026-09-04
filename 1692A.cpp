#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a;
        int count=0;
        cin>>a;
        for(int i=1;i<4;i++){
            int k;
            cin>>k;
            if(k>a){
                count++;
            }
        }
        cout<<count<<endl;
    }
    
    return 0;
}