#include<iostream>
#include<vector>
#include<string>
using namespace std;


int main(){
    int  t;
    cin>>t;
    int count=0;
    for(int i=0;i<t;i++){
        int sum=0;
        for(int j=0;j<3;j++){
            int x;
            cin>>x;
            sum+=x;
            if(sum>=2){
                count++;
                break;
            }
        }
    }
    cout<<count<<endl;
    return 0;
    
}