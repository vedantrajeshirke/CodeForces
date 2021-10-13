#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,count=0;
    cin>>n;
    while(n--){
        int a;
        cin>>a;
        if(a==1){
            count++;
            break;
        }
    }
    if(count==0)
    cout<<"EASY"<<endl;
    else
    cout<<"HARD"<<endl;
    return 0;
}