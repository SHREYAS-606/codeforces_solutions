#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Solution{
    public:
        int solve(string a,string b){
            int n=a.size();
            for(int i=0;i<n;i++){
                if(tolower(a[i])<tolower(b[i])){
                    return -1;
                }else if(tolower(a[i])>tolower(b[i])){
                    return 1;
                }
            }
            return 0;
        }
};


int main(){
    string a;
    string b;
    int n=a.size();

    int t=Solution().solve(a,b);
    cout<<t<<endl;


    return 0;
    
}