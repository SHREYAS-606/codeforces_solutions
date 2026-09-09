#include<iostream>
#include<string>
using namespace std;

int main(){
    int n;
    cin >> n;

    while(n--){
        int k;
        cin >> k;

        string s;
        cin >> s;

        int count = 0;

        for(int j = 0; j < k; j++){
            if(s[j] == '('){
                count++;
            }
            else{
                if(count > 0)
                    count--;
            }
        }

        cout << count << endl;
    }

    return 0;
}