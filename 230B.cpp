#include<iostream>
#include<vector>
#include<string>
#include<cmath>
using namespace std;

class Solution{
    public:
        static bool pr(long long n){
            if(n<2){
                return false;
            }
            if (n == 2) return true;

    if (n % 2 == 0) return false;

            for(long long i=3;i*i<=n;i+=2){
                if(n%i==0)return false;
            }
            return true;
        }
};


int main(){
    int  t;
    cin>>t;
    int count=0;
    for(int i=0;i<t;i++){
        long long a;
        cin>>a;
        long long sq=sqrt(a);
        if(sq*sq==a && Solution::pr(sq)){
            cout<<"YES"<<endl;

        }else{
            cout<<"NO"<<endl;
        }

    }
    
    return 0;
    
}