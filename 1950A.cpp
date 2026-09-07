#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int a,b,c;
        cin>>a>>b>>c;
        if(b>a && c>b){
            cout<<"STAIR"<<endl;
        }else if(b>a && b>c){
            cout<<"PEAK"<<endl;
        }else{
            cout<<"NONE"<<endl;
        }
    }



    return 0;
}