#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;

    sort(s.begin(), s.end());
    s.erase(unique(s.begin(), s.end()), s.end());
    int size = s.length();
    if(size%2==1)
    {
        cout<<"IGNORE HIM!"<<endl;
    }
    else {
        cout<<"CHAT WITH HER!"<<endl;
    }
    return 0;
}