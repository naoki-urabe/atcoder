#include <bits/stdc++.h>
using namespace std;
int main() { 
    int n;
    cin>>n;
    vector<int> a(n+1,0);
    int count=0;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        if(i==a[i])count++;
    }
    long long ans=(long long)(count)*(count-1)/2;
    for(int i=1;i<=n;i++){
        if(a[i]>i&&a[a[i]]==i)ans++;
    }
    cout<<ans<<endl;
    return 0;
}