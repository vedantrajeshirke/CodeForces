#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int dcount=0,acount=0;
    for(int i=0;i<n;i++)
    {
        char c;
        cin>>c;
        if(c=='A'){
            acount++;
            continue;
        }
        if(c=='D'){
            dcount++;
            continue;
        }
    }
    if(acount==dcount){ cout<<"Friendship"<<endl;}
    else if(acount>dcount){ cout<<"Anton"<<endl;}
    else{ cout<<"Danik"<<endl;}

    return 0;
}