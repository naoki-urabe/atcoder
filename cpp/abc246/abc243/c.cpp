#include <bits/stdc++.h>
using namespace std;
int main() { 
    int n;
    long long x;
    cin>>n>>x;
    string s;
    cin>>s;
    string t;
    for(int i=0;i<n;i++){
        if(t.size()>0&&t.back()!='U'){
            if(s[i]=='U')t.pop_front();
            else t+=s[i];
        } else {
            t+=s[i];
        }
    }
    for(int i=0;i<t.size();i++){
        if(t[i]=='U')x/=2;
        if(t[i]=='L')x*=2;
        if(t[i]=='R')x=x*2+1;
    }
    cout<<x<<endl;
    return 0;
}