#include <bits/stdc++.h>
using namespace std;

int main() { 
    int n;
    cin>>n;
    long long dp[1000000+1][10]={0};
    for(int i=1;i<=9;i++)dp[1][i]=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=9;j++){
            if(j-1>=1)dp[i][j]+=dp[i-1][j-1];
            if(j+1<=9)dp[i][j]+=dp[i-1][j+1];
            dp[i][j]+=dp[i-1][j];
            dp[i][j]%=998244353;
        }
    }
    long long ans=0;
    for(int i=1;i<=9;i++){
        ans+=dp[n][i];
        ans%=998244353;
    }
    cout<<ans<<endl;
    return 0;
}