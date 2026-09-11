#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n>0){
        cout<<n<<endl;
    }else{
        int k=n%10;
        int ans1=n/10;
        int ans2=(ans1/10)*10+k;
        cout<<max(ans1,ans2)<<endl;
    }
    return 0;
}