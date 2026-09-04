#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ele=-1;
    int count=0;
    int maxi=0;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        if(ele==-1){
            count++;
            ele=a;
        }else if(ele<=a){
            count++;
            ele=a;

        }else{
            ele=a;
            count=1;
        }
        maxi=maxi>count?maxi:count;

    }
    cout<<maxi<<endl;
    return 0;
}
