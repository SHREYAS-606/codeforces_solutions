#include<iostream>
#include<unordered_set>
using namespace std;

int main(){
      int a,b,c,d;
      cin>>a>>b>>c>>d;
      unordered_set<int> s={a,b,c,d};
      int ans=4-s.size();
      cout<<ans<<endl;
      return 0;
}

