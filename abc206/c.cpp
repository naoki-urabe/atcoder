#include <bits/stdc++.h>
using namespace std;
int main() { 
    long long n;
    cin>>n;
    vector<int> a(n,0);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    long long res=n*(n-1)/2;
    sort(a.begin(),a.end());
    long long cnt=1;
    for(int i=0;i<n;i++){
        if(a[i]!=a[i+1]){
            res-=(cnt*(cnt-1))/2;
            cnt=1;
        }
        else cnt++;
    }
    cout<<res<<endl;
    return 0;
}