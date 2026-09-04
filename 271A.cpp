#include<iostream>
#include<vector>
using namespace std;


int main(){
    int year;
    cin>>year;
    while(true){
        year++;
        while(year>0){
        int d1=year%10;
        int d2=(year/10)%10;
        int d3=(year/100)%10;
        int d4=(year/1000)%10;
        if(d1!=d2 && d1!=d3 && d1!=d4 && d2!=d3 && d2!=d4 && d3!=d4){
                cout<<year<<endl;
                return 0;
            }
            break;
        }
    }
    return 0;
}