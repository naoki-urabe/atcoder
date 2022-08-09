#include <bits/stdc++.h>
using namespace std;
int main() { 
    int n;
    cin>>n;
    map<string, int> mp;
    for(int i=0;i<n;i++){
        int count[26]={0};
        string s;
        cin>>s;
        for(int j=0;j<s.size();j++){
            count[s[j]-'a']++;
        }
        string t="";
        for(int j=0;j<26;j++){
            t+=count[j]+'0';
        }
        if(mp.find(t)!=mp.end()){
            mp[t]++;
        } else {
            mp[t]=1;
        }
    }
    long long ans=0;
    for(auto itr=mp.begin();itr!=mp.end();itr++){
        long long v=itr->second;
        ans+=v*(v-1)/2;
    }
    cout<<ans<<endl;
    return 0;
}