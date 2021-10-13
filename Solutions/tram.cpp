#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    int max=-1,capacity=0;
    while(t--){
        int a,b;
        cin>>a>>b;
        
        capacity-=a;
        capacity+=b;
        if(max<capacity){
            max=capacity;
        }
    }cout<<max<<endl;
    
    return 0;
}