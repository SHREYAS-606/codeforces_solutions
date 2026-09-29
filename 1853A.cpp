#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        int mini=INT_MAX;
        int last;
        cin>>last;
        int issort=1;
        for(int j=1;j<k;j++){
            int p;
            cin>>p;
            if(p<last){
                issort=0;
            }else{
                mini=min(mini,p-last);
                last=p;
            }
        }
        if(!issort){
            cout<<0<<endl;
        }else{
            cout<<mini/2+1<<endl;
        }
        
    }


    return 0;
}
