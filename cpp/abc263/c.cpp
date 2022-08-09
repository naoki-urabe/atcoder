#include <bits/stdc++.h>
using namespace std;
int n,m;
vector<int> ans;
void dfs(int dep, int cur){
    if(dep==n){
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
        return;
    }
    for(int i=cur;i<=m;i++){
        ans.push_back(i);
        dfs(dep+1, i+1);
        ans.pop_back();
    }
}
int main() { 
    cin>>n>>m;
    dfs(0, 1);
    return 0;
}