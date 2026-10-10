#include <iostream>
#include <string>
#include <vector>
using namespace std;



int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
         string s;
        cin >> s;
        s.pop_back();
        s.pop_back();
        s+='i';
        cout<<s<<endl;
    }

    return 0;
}