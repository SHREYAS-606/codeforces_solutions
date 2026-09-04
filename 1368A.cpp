#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        int a,b,c;
        int count=0;
        cin>>a>>b>>c;
        while(a<=c && b<=c){
            if(a>=b){
                b+=a;
            }else{
                a+=b;
            }
            count++;
        }
        cout<<count<<endl;
    }
    return 0;
}