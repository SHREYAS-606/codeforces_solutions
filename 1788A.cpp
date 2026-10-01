#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    for(int i=0;i<t;i++){
        int n;
        vector<int> a;
        cin >> n;
        double prod=1;
        for(int j=0;j<n;j++){
            int x;
            cin >> x;
            a.push_back(x);
            prod*=x;
        }
        double p=1;
        int is=1;
        for(int i=0;i<n-1;i++){
             p*=a[i];
             prod=prod/a[i];

             if(p==prod){
                is=0;
                 cout << i+1<< endl;
                 break;
             }
        }
        if(is==1){
            cout << -1 << endl;
        }
    }

    return 0;
}