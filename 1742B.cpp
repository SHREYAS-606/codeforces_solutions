#include<iostream>
#include<unordered_set>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int m;
        cin>>m;
        unordered_set<int> st;
        for(int j=0;j<m;j++){
            int k;
            cin>>k;
            st.insert(k);
            
        }
        if(st.size()==m){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }

    }
    return 0;
}