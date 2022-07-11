#include <bits/stdc++.h>
using namespace std;
int main() { 
    int n;
    string s;
    cin>>n;
    cin>>s;
    int x=0;
    int ans=0;
    for(int i=0;i<n;i++){
        if(s[i]=='I')x++;
        else x--;
        ans=max(ans,x);
    }
    cout<<ans<<endl;
    return 0;
}