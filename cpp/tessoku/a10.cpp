#include <bits/stdc++.h>
using namespace std;
int main() { 
    int n;
    cin>>n;
    int a[100001]={0};
    for(int i=1;i<=n;i++)cin>>a[i];
    int d;
    cin>>d;
    int lmax[100001]={0};
    int rmax[100001]={0};
    for(int i=1;i<=n;i++)lmax[i]=max(a[i],lmax[i-1]);
    for(int i=n;i>=1;i--)rmax[i]=max(rmax[i+1],a[i]);
    for(int i=0;i<d;i++){
        int l,r;
        cin>>l>>r;
        cout<<max(lmax[l-1],rmax[r+1])<<endl;
    }
    return 0;
}