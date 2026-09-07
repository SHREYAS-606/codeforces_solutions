#include<iostream>
using namespace std;

class Solution{
    public:
        int gcd(int a,int b){
            if(b==0) return a;
            return gcd(b,a%b);
        }

};

int main(){
    int a,b;
    cin>>a>>b;
    int k=max(a,b);
    int num=6-k+1;
    int gc=1;
    gc=Solution().gcd(num,6);
    cout<<num/gc<<"/"<<6/gc<<endl;
    return 0;

}