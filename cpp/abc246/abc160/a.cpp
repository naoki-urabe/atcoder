#include <bits/stdc++.h>
using namespace std;
int main() { 
    int k,n;
    cin>>k>>n;
    vector<int> a(n,0);
    for(int i=0;i<n;i++) {
        cin>>a[i];
        if(a[i]==0)a[i]=k;
    }
    sort(a.begin(),a.end());
    int ans=1000000;
    for(int i=0;i<n;i++){
        int comp1=a[i],comp2=a[(n-1+i)%n];
        if(comp1>comp2)comp2+=k;
        ans=min(ans,abs(comp2-comp1));
    }
    cout<<ans<<endl;
    return 0;
}