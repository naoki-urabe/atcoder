#include <bits/stdc++.h>
using namespace std;
long long dp[200][200000]={0};
long long we[200]={0};
long long v[200]={0};
int main() { 
    int n,w;
    cin>>n>>w;
    for(int i=1;i<=n;i++){
        cin>>we[i]>>v[i];
    }
    for(int i=0;i<200;i++){
        for(int j=0;j<200000;j++){
            dp[i][j]=-1;
        }
    }
    dp[0][0]=0;
    long long ans=0;
    for(int i=1;i<=n;i++){
        for(int j=0;j<=200000;j++){
            if(dp[i-1][j]!=-1){
                dp[i][j]=max(dp[i][j],dp[i-1][j]);
                if(j+we[i]<=w){
                    // cout<<dp[i-1][j]<<" "<<v[i]<<" "<<dp[i-1][j]+v[i]<<" | ";
                    dp[i][j+we[i]]=max(dp[i-1][j],dp[i-1][j]+v[i]);
                    ans=max(ans,dp[i][j+we[i]]);
                }
            }
        }
        // cout<<endl;
    }
    /* for(int i=0;i<=n;i++){
        for(int j=0;j<=40;j++){
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }*/
    cout<<ans<<endl;
    return 0;
}