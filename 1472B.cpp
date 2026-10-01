#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int ec=0;
        int oc=0;
        int k;
        cin>>k;
        for(int j=0;j<k;j++){
              int p;
              cin>>p;
              if(p==1)oc++;
              if(p==2)ec++;
              
        }
        int sum=oc+2*ec;
        if (sum % 2 == 0 && !(ec % 2 == 1 && oc == 0)){
            cout<<"YES"<<endl;

        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}