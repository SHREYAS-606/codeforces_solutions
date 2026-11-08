#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    for(int i=0;i<t;i++){
      int n;
      cin >> n;
      vector<int> a(n);
      for(int j=0;j<n;j++){
          cin >> a[j];
      }
      if(a[0]==a[n-1]){
          cout << "NO" << endl;
      }else{
        cout << "YES" << endl;
        cout<<a[n-1]<<" ";
        for(int j=0;j<n-1;j++){
            cout<<a[j]<<" ";
        }
        printf("\n");
      }
     
    }

    return 0;
}