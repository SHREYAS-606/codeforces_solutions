#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        long long a,b,c,n;
        cin>>a>>b>>c>>n;
        long long maxi=max({a,b,c});
        long long  diff=3*maxi-a-b-c;
       if (n >= diff && (n - diff) % 3 == 0) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
        

    }
    return 0;
}