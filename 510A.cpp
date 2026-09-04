#include<iostream>
#include<string>

using namespace std;

int main(){
    string a="",b="",c="";
    int x,y;
    cin>>x>>y;
    for(int i=1;i<=y;i++){
        a+='#';
        if(i==1){
            c+='#';
        }else{
         c+='.';
        }
         if(i==y){
            b+='#';
        }else{
         b+='.';
        }
    }
    for(int i=1;i<=x;i++){
        if(i%2==1){
            cout<<a<<endl;
        }else{
            if((i/2)%2){
                cout<<b<<endl;
            }else{
                cout<<c<<endl;
            }
        }

    }
    return 0;


}