#include <iostream>
#include<string>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int j = 0; j < n; j++)
    {
        int a = 0;
        int b = 0;
        string s;
            cin >> s;
        for (int i = 0; i < 3; i++)
        {
            
            a += (s[i] - '0');
            b += (s[s.size() - i - 1] - '0');
        }
        if(a==b){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}