#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int  n;
    cin>>n;
    vector<pair<int,int>> v(n);
    for(int i=0;i<n;i++){
         cin>>v[i].first>>v[i].second;
     
    }
    sort(v.begin(), v.end());

    for(int i=1;i<n;i++){
        if(v[i].first<=v[i-1].second){
            cout<<"Happy Alex"<<endl;
            return 0;
        }
    }
   cout<<"Poor Alex"<<endl;
   return 0;

}