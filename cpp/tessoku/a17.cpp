#include <bits/stdc++.h>
using namespace std;
int main() { 
    int n;
    cin>>n;
    int a[n]={0};
    int b[n]={0};
    int dp[n]={0};
    for(int i=2;i<=n;i++)cin>>a[i];
    for(int i=3;i<=n;i++)cin>>b[i];
    dp[2]=a[2];
    vector<int> ans;
    for(int i=3;i<=n;i++)dp[i]=min(dp[i-1]+a[i],dp[i-2]+b[i]);
    int cur=n;
    while(true){
        ans.push_back(cur);
        if(cur==1)break;
        if(dp[cur]-a[cur]==dp[cur-1]){
            cur=cur-1;
        } else {
            cur=cur-2;
        }
    }
    reverse(ans.begin(),ans.end());
    cout<<ans.size()<<endl;
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
}