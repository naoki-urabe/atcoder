#include <bits/stdc++.h>
using namespace std;
int main() { 
    int n;
    long long k;
    cin>>n>>k;
    vector<pair<long long, long long> > ab;
    for(int i=0;i<n;i++){
        long long a,b;
        cin>>a>>b;
        ab.push_back(make_pair(a,b));
    }
    sort(ab.begin(),ab.end());
    for(int i=0;i<n;i++){
        if(ab[i].first>k)break;
        else k+=ab[i].second;
    }
    cout<<k<<endl;
    return 0;
}