#include<iostream>
#include<vector>
using namespace std;
int main() {
    int n,m;
    cin>>n>>m;
    vector<int> a(n+1);
    vector<int> b(m+1);
    for(int i=1;i<=n;i++)cin>>a[i];
    for(int i=1;i<=m;i++)cin>>b[i];
    bool ok=true;
    for(int j=1;j<=m;j++){
        bool flag=false;
        for(int i=1;i<=n;i++){
            if(a[i]==b[j]){
                a[i]=0;
                flag=true;
                break;
            }
        }
        ok=min(ok,flag);
    }
    if(ok)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}