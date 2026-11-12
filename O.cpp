#include <iostream>
#include <vector>
using namespace std;
const int MOD=1e9+7;
int main() {
    int a,b;
    cin >> a >> b;
    string s;
    cin >> s;
    vector<int> v(a+1,0);
    long long sum=0;
    for(int i=1;i<=a;i++){
        if(i==1){
            v[i]=1;
        }else if(s[i-1]=='.'){
           v[i]=sum;
        }
        sum=(sum+v[i])%MOD;

        if(i-b>=1){
            sum=(sum-v[i-b]+MOD)%MOD;
        }

    }
    cout << v[a] << endl;

    return 0;
}