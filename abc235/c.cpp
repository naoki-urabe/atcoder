#include <bits/stdc++.h>
using namespace std;
// arr[整数n][k回目]=aの前から何番目

int main() { 
    int n,q;
    cin>>n>>q;
    map<int, vector<int> > mp;
    for(int i=1;i<=n;i++){
        int a;
        cin>>a;
        mp[a].push_back(i);
    }
    vector<int> ans;
    for(int i=0;i<q;i++){
        int x,k;
        cin>>x>>k;
        if(mp[x].size()>=k){
            ans.push_back(mp[x][k-1]);
        } else {
            ans.push_back(-1);
        }
    }
    for(int i=0;i<q;i++){
        cout<<ans[i]<<endl;
    }
    return 0;
}