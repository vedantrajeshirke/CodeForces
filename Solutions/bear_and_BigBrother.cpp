#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    int ans=0;
    if(a>b)
    { ans=0; }
    else {
        while(a<=b){
            a*=3;
            b*=2;
            ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}