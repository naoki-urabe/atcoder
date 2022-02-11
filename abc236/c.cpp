#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,m;
    cin>>n>>m;
    vector<string> s(n);
    vector<string> t(m);
    for(int i=0;i<n;i++)cin>>s[i];
    for(int i=0;i<m;i++)cin>>t[i];
    int idx=0;
    for(int i=0;i<n;i++){
        if(s[i]==t[idx]){
            cout<<"Yes"<<endl;
            idx++;
        } else {
            cout<<"No"<<endl;
        }
    }
    return 0;
}