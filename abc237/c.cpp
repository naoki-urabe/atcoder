#include<bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin>>s;
    int idx=0;
    bool flag=true;
    for(int l=s.length()-1;l>=idx;l--) {
       if(s[idx]==s[l])idx++;
       else if(s[l]=='a')continue;
       else flag=false;

    }
    if(flag)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}