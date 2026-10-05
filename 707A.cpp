#include <iostream>
#include <string>
using namespace std;

int main()
{
    int m,n;
    cin >> m>>n;
    for (int i = 0; i < m; i++){
       for(int j=0;j<n;j++){
        char ch;
        cin>>ch;
        if(ch!='B' && ch!='W' && ch!='G'){
            cout<<"#Color"<<endl;
            return 0;
        }
       }
    }
    cout<<"#Black&White"<<endl;
    return 0;
}