#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;

    int low=0,up=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]>='a' && s[i]<='z')
        {
            low++;
        }
        else{
            up++;
        }
    }
    if(low==up || low>up)
    {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    }  
    else
    {
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    }
    cout<<s<<endl;

    return 0;  
}