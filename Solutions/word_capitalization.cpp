#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    char c = s[0];
    s[0] = towupper(c);
    cout<<s<<endl;
    return 0;
}