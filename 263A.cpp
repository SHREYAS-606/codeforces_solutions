#include<iostream>
using namespace std;

int main(){
    int row=0;
    int col=0;
    bool found=false;;
    for(int i=0;i<5 && !found;i++){
        for(int j=0;j<5;j++){
            int a;
            cin>>a;
            if(a==1){
                found =true;
                row=i;
              col=j;
                break;

            }
        }
    }
    int ans=abs(2-row)+abs(2-col);
    cout<<ans<<endl;
    return 0;
}