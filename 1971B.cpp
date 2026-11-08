#include<iostream>
#include<string>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string a;
        cin>>a;
        int k=a.size();
        char ele=a[0];
        int count=1;
        for(int j=1;j<k;j++){
            if(a[j]==ele){
                count++;
            }
        }
        if(count==k){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
            
        }
    }
    return 0;
}