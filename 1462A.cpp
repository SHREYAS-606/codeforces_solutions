#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        vector<int> vec;
        for(int j=0;j<k;j++){
            int l;
            cin>>l;
            vec.push_back(l);
        }
        int l=0;
        int r=k-1;
        while(l<=r){
            if(l==r){
                cout<<vec[l];
            }else{
                cout<<vec[l]<<' '<<vec[r]<<' ';
            }
            l++;
            r--;
        }
        cout<<"\n";

    }
    return 0;
}