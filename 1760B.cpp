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
        string str;
        cin >> str;
        int maxi=0;
        for(int j=0;j<k;j++){
            maxi=max(maxi, str[j]-'a'+1);
        }
        cout<<maxi<<endl;
    }
    return 0;
}