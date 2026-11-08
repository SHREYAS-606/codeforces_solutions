
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        string a, b;
        cin >> a >> b;

        if(b.size() < a.size()){
            cout << "NO" << endl;
        }
        else{
            vector<int> freq(26, 0);
            vector<int> freq1(26, 0);

            for(int j = 0; j < a.size(); j++){
                freq[a[j] - 'a']++;
            }

            int k = a.size();

           
            for(int j = 0; j < k; j++){
                freq1[b[j] - 'a']++;
            }

            bool found = false;

            
            if(freq == freq1){
                found = true;
            }

            
            for(int j = k; j < b.size(); j++){

                
                freq1[b[j] - 'a']++;

                
                freq1[b[j-k] - 'a']--;

                if(freq == freq1){
                    found = true;
                    break;
                }
            }

            cout << (found ? "YES" : "NO") << endl;
        }
    }

    return 0;
}
