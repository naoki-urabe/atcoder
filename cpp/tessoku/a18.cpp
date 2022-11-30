#include <bits/stdc++.h>
using namespace std;
bool dp[100][200000]={false};
int main() { 
    int n,s;
    cin>>n>>s;
    int a[n+1]={0};
    for(int i=1;i<=n;i++)cin>>a[i];
    dp[0][0]=true;
    for(int i=1;i<=n;i++){
        for(int j=0;j<=s;j++){
            if(dp[i-1][j]){
                dp[i][j]=true;
                if(j+a[i]>s){
                    continue;
                }
                dp[i][j+a[i]]=true;
            }
        }
    }
    for(int i=1;i<=n;i++){
        if(dp[i][s]){
            cout<<"Yes"<<endl;
            return 0;
        }
    }
    cout<<"No"<<endl;
    return 0;
}