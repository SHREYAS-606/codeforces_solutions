#include<iostream>
#include<vector>
using namespace std;

int main(){

    int a,b;
    cin>>a>>b;
    vector<int> arr(a);
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }
    int count=0;
    for(int i=0;i<a;i++){
        if(arr[i]>0 && arr[i]>=arr[b-1]){
            count++;
        }

    }
    cout<<count<<endl;
    return 0;


    return 0;
}