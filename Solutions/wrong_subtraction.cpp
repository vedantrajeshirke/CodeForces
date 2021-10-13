#include <bits/stdc++.h>
using namespace std;

int main(){
    int num,k;
    cin>>num>>k;
    //int res;
    for(int i=1;i<=k;i++)
    {
        if(num%10==0)
        { num/=10;}
        else{
            num-=1;
        }
    }
    cout<<num<<endl;

    return 0;
}