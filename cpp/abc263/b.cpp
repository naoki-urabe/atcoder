#include <bits/stdc++.h>
using namespace std;
int main() { 
    int n;
    cin>>n;
    int p[51]={0};
    for(int i=2;i<=n;i++){
        cin>>p[i];
    }
    int ans=0;
    int cur=n;
    while(cur!=1){
        cur=p[cur];
        ans++;
    }
    cout<<ans<<endl;
    return 0;
}