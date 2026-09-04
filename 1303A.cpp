#include <iostream>
#include <string>
using namespace std;

int main()
{

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int count = 0;
        int lastseen = -1;
        string s;
        cin >> s;
        int n = s.size();
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                if (lastseen != -1)
                {
                    count += (i - lastseen - 1);
                }
                lastseen = i;
            }
        }
        cout<<count<<endl;
    }
    
    return 0;
}