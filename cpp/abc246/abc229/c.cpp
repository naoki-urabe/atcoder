#include <bits/stdc++.h>
using namespace std;
int main() { 
    int n,w;
    cin>>n>>w;
    vector<pair<long long,int> > ab;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        ab.push_back(make_pair(a,b));
    }
    sort(ab.begin(),ab.end());
    long long ans=0;
    int sum=0;
    for(int i=n-1;i>=0;i--){
        if(w<=0)break;
        ans+=ab[i].first*min(w,ab[i].second);
        w-=min(w,ab[i].second);
    }
    cout<<ans<<endl;
    return 0;
}