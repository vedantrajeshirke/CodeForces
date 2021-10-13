#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,count=0;
    cin>>n;
    char alphabet[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    string str;
    cin>>str;
    for(int i=0;i<n;i++){
        str[i] = toupper(str[i]);
    }
    for(int j=0;j<26;j++){
        for(int i=0;i<n;i++){
            if(alphabet[j] == str[i]){
                count++;
                break;
            }
        }
    }
    
    if(count==26)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}