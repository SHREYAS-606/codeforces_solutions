#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int rate;
        cin>>rate;
        if(rate<=1399){
            cout<<"Division 4"<<endl;
        }else if(rate>=1400 && rate<=1599){
            cout<<"Division 3"<<endl;
        }else if(rate>=1600 && rate<=1899){
            cout<<"Division 2"<<endl;
        }if(rate>=1900){
            cout<<"Division 1"<<endl;
        }
    }
    return 0;
}