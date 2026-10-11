#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        stack<int> s;
        for (int j = 0; j < k; j++)
        {
            string str;
            cin >> str;
            for(int l=0;l<4;l++){
                if(str[l]=='#'){
                    s.push(l+1);
                }
            }
        }
        while(!s.empty()){
            cout<<s.top()<<" ";
            s.pop();
        }
    }
    return 0;
}