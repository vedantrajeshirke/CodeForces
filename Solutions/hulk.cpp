#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string s="",a="I hate ",b="I love ",c="that ";
    for(int i=1;i<=n;i++){
        if(i%2==1){
            s+=a;
        }
        else{
            s+=b;
        }
        if(i!=n)
        {
            s+=c;
        }
    }
    cout<<s<<"it"<<endl;
    return 0;

}