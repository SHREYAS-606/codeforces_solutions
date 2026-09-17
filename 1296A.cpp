#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        int odd=0;
        int even=0;
        for(int i=0;i<a;i++){
            int k;
            cin>>k;
            if(k%2){
                odd++;
            }else{
                even++;
            }
        }
        if((odd==a && a%2==0) || even==a){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}