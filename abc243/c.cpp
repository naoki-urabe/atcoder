#include <bits/stdc++.h>
using namespace std;
int main() { 
    int n;
    cin>>n;
    vector<int> x(n,0);
    vector<int> y(n,0);
    for(int i=0;i<n;i++){
        cin>>x[i]>>y[i];
    }
    string s;
    cin>>s;
    map<int, int> R;
    map<int, int> L;
    bool flag=false;
    for(int i=0;i<n;i++){
        if(s[i]=='R'){
            if(R.find(y[i])!=R.end()){
                R[y[i]]=min(R[y[i]],x[i]);
            } else {
                R[y[i]]=x[i];
            }
        }
        if(s[i]=='L'){
            if(L.find(y[i])!=L.end()){
                L[y[i]]=max(L[y[i]],x[i]);
            } else {
                L[y[i]]=x[i];
            }
        }
        if(R.find(y[i])!=R.end()&&L.find(y[i])!=L.end()){
            if(R[y[i]]<L[y[i]])flag=true;
        }
    }
    if(flag)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}