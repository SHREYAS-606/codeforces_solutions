#include<iostream>

using namespace std;

int main(){
    int i=1;
    int k,n,w;
    cin>>k>>n>>w;
    int t=k*(w*(w+1))/2;
    if(t>n){
        cout<<t-n<<endl;
    }else{
        cout<<0<<endl;
    }
    return 0;
}