#include <bits/stdc++.h>
using namespace std;
int main() { 
    int n,m;
    cin>>n>>m;
    vector adj(n+1, vector<bool>(n+1));
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj[u][v]=true;
        adj[v][u]=true;
    }
    int ans=0;
    for(int i=1;i<=n;i++){
        for(int j=i+1;j<=n;j++){
            for(int k=j+1;k<=n;k++){
                if(adj[i][j]&&adj[j][k]&&adj[k][i]){
                    ans++;
                }
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}