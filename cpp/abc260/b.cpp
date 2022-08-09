#include <bits/stdc++.h>
using namespace std;
int main() { 
    int n,x,y,z;
    cin>>n>>x>>y>>z;
    vector<int> a(n+1,0);
    vector<int> b(n+1,0);
    for(int i=1;i<=n;i++)cin>>a[i];
    for(int i=1;i<=n;i++)cin>>b[i];
    vector<int> ans;
    vector<bool> selected(n+1,0);
    for(int i=1;i<=x;i++){
        int max=-1,pos=-1;
        for(int j=1;j<=n;j++){
            if(!selected[j]&&a[j]>max){
                max=a[j];
                pos=j;
            }
        }
        if(pos==-1)continue;
        selected[pos]=true;
        ans.push_back(pos);
    }
    for(int i=1;i<=y;i++){
        int max=-1,pos=-1;
        for(int j=1;j<=n;j++){
            if(!selected[j]&&b[j]>max){
                max=b[j];
                pos=j;
            }
        }
        if(pos==-1)continue;
        selected[pos]=true;
        ans.push_back(pos);
    }
    for(int i=1;i<=z;i++){
        int max=-1,pos=-1;
        for(int j=1;j<=n;j++){
            if(!selected[j]&&a[j]+b[j]>max){
                max=a[j]+b[j];
                pos=j;
            }
        }
        if(pos==-1)continue;
        selected[pos]=true;
        ans.push_back(pos);
    }
    sort(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<endl;
    }
    return 0;
}