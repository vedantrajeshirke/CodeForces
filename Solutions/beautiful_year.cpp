#include <bits/stdc++.h>
using namespace std;

int main(){
    int year;
    cin>>year;
    while(true){
        year+=1;
        int thousands = year/1000;
        int hundreds = year/100 % 10;
        int tens = year/10 % 10;
        int units = year%10;

        if(thousands!=hundreds && thousands!=tens && thousands!=units &&
            hundreds!=tens && hundreds!=units && tens!=units){
                break;
            }
            
    }
    cout<<year<<endl;
    return 0;
}