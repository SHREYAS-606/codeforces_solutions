#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        if (s.size() % 2 == 1)
        {
            cout << "NO" << endl;
        }
        else
        {   
            int ist=1;
            int len=s.size();
            for (int i = 0; i < len/2; i++)
            {
             if(s[i]!=s[i+len/2]){
                ist=0;
             }   
            }
            if(ist){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}