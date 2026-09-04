#include<iostream>
#include<string>
using namespace std;

int main(){
    int  n;
    cin>>n;
    int k=0;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        if( s== "++X"|| s=="X++"){
            k++;

        }else{
              k--;
        }
    }
    cout<<k<<endl;
    return 0;
}