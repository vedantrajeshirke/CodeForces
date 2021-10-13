#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int n=s.length();
    sort(s,s+n);
    int count=0;
    for(int i=0;i<n-1;i++)
    {
        if(s[i]>=97&&s[i]<=122)
        {
            
            if(s[i]!=s[i+1]){
                count++;
            }
        }
    }
    cout<<count<<endl;
    return 0;
}