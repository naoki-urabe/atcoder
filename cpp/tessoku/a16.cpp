#include <bits/stdc++.h>
using namespace std;
int main() { 
    int n;
    cin>>n;
    int a[n+1]={0};
    int b[n+1]={0};
    for(int i=2;i<=n;i++)cin>>a[i];
    for(int i=3;i<=n;i++)cin>>b[i];
    b[2]=200;
    int dp[n+1]={0};
    for(int i=2;i<=n;i++){
        dp[i]=min(dp[i-1]+a[i],dp[i-2]+b[i]);
    }
    cout<<dp[n]<<endl;
    return 0;
}