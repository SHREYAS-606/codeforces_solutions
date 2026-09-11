#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int a;
        cin >> a;
        int count = 0;
        for (int j = 1; j < a; j++)
        {
            if (a - j >= 1 && a - j <= n)
            {
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}