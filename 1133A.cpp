#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    int  a;
    char t;
    int b;
    int c,d;
    char k;

    cin>>a>>t>>b;
    cin>>c>>k>>d;
    if((c-a)%2==1){
        a+=(c-a)/2;

        b+=(d-b)/2;
        b+=30;
    }else{
        a+=(c-a)/2;
        b+=(d-b)/2;
    }
    a+=b/60;
    b=b%60;
    string h,m;
    h="";
    m="";
    if(b<10){
        m="0";
    }
    if(a<10){
        h="0";
    }
    cout<<h<<a<<':'<<m<<b<<endl;
   

    
    return 0;
}