#include <bits/stdc++.h>
using namespace std;
int dp[3000][3000]={0};
int main() { 
    string s,t;
    cin>>s>>t;
    for(int i=1;i<=s.size();i++){
        for(int j=1;j<=t.size();j++){
            if(s[i-1]==t[j-1])dp[i][j]=max(dp[i-1][j],max(dp[i][j-1],dp[i-1][j-1]+1));
            else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
        }
    }
    /*for(int i=0;i<=s.size();i++){
        for(int j=0;j<=t.size();j++){
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }*/
    cout<<dp[s.size()][t.size()]<<endl;
    return 0;
}