#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> freq(n+1,0);
    int a;
    cin>>a;
    for(int i=0;i<a;i++){
         int k;
         cin>>k;
         freq[k]++;
    }
    int b;
    cin>>b;
    for(int i=0;i<b;i++){
         int k;
         cin>>k;
         freq[k]++;
    }
    for(int i=1;i<n+1;i++){
        if(freq[i]==0){
            cout<<"Oh, my keyboard!"<<endl;
            return 0;

        }
    }
    cout<<"I become the guy."<<endl;
    return 0;

}
