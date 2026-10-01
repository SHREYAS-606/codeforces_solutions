#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        
            int a, b;
            cin >> a >> b;
            if (a % b == 0)
            {
                cout << 2 << endl;
                cout << a - 1 <<" "<< 1 << endl;
            }else{
                cout<<1<<endl;
                cout<<a<<endl;
            }
        
    }
    return 0;
}