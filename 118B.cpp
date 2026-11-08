#include <iostream>
#include<vector>
#include<string>
using namespace std;



int main() {
    int n;
    cin >> n;
    vector<string> v(n+1,""); 

    for (int i = 0; i <=n; i++) {
        int k=i*2+1;
        int l=0;
        for(int p=0;p<2*(n-i);p++){
            v[i]+=' ';
        }
        for(int j=0;j<k;j++){
            if(v[i].size()==2*(n-i)){
                v[i]+=to_string(l);
                l++;
            }else{
                v[i]+=' ';
                v[i]+=to_string(l);
                if(j>=k/2){
                    l--;
                }else{
                    l++;
                }
            }
        }
        

    }
    for(int o=0;o<=n;o++){
            cout<<v[o]<<endl;
    }
    for(int o=n-1;o>=0;o--){
            cout<<v[o]<<endl;
    }
    return 0;
}