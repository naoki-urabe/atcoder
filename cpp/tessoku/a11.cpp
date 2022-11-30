#include <bits/stdc++.h>
using namespace std;
int main() { 
    int n,x;
    cin>>n>>x;
    int a[n+1];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int l=-1,r=n,mid;
    while(r-l>1) {
        mid=(l+r)/2;
        if(x<=a[mid])r=mid;
        else l=mid;
    }
    cout<<r+1<<endl;
    return 0;
}