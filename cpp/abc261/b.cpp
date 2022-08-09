#include <bits/stdc++.h>
using namespace std;
int main() { 
    int n;
    cin>>n;
    vector<string> a;
    for(int i=0;i<n;i++){
        string tmp;
        cin>>tmp;
        a.push_back(tmp);
    }
    bool flag=true;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j)continue;
            if(a[i][j]!='D'&&a[i][j]==a[j][i])flag=false;
            else if(a[i][j]=='D'&&a[i][j]!=a[j][i])flag=false;
        }
    }
    if(flag)cout<<"correct"<<endl;
    else cout<<"incorrect"<<endl;
    return 0;
}