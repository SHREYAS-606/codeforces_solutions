#include<iostream>
#include<vector>
using namespace std;


int main(){
     long long t;
     cin>>t;

        long long num=0;
        long long mul=1;
        
        
        while(t>0){
            int d=t%10;
            if(t/10==0 && d==9){
                d=9;
            }else if(d>=5){
                d=9-d;
            }
            num=num+d*mul;
            mul*=10;
            t/=10;
        }
            
     cout<<num<<endl;

     return 0;
}