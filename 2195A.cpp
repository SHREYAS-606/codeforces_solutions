#include<iostream>
#include<vector>
using namespace std;
class Solution{
    public:
        int solve(vector<int> &arr){
            for(int x:arr){
                if(x==67){
                    return 1;
                }
            }
            return 0;
        }
};

int main(){
    int t;
    cin>>t;
    while(t){
        int n;
        cin>>n;
        vector<int> arr;
       
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            arr.push_back(x);
        }
        if(Solution().solve(arr)){
        cout<<"YES"<<endl;
        }else{
        cout<<"NO"<<endl;
        }
        t--;

    }   
    return 0;
    
}