#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n ;
    for(int i=0;i<n;i++){
           string s;
             cin>>s;
           int k=s.size();
         
           reverse(s.begin(),s.end());
           for(int j=0;j<k;j++){
               if(s[j]=='p'){
                   s[j]='q';
               }
               else if (s[j]=='q'){
                   s[j]='p';
               }
           }
           cout<<s<<endl;
           
    }

    return 0;
}