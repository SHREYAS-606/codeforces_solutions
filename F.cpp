#include<iostream>
#include<climits>
#include<algorithm>

using namespace std;

int main(){
    
    int t;
    cin>>t;
    long long sum=0;
    long long maxi=INT_MIN;
    for(int i=0;i<t;i++){
        int a;
        cin>>a;
        sum+=a;
        maxi=max(maxi,sum);
        if(sum<0){
            sum=0;
        }
    }
    cout<<maxi<<endl;
    return 0;
}