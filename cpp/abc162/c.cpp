#include <bits/stdc++.h>
using namespace std;
int gcd(int p,int q){
    while(q!=0){
        int r = p%q;
        p=q;
        q=r;
    }
    return p;
}
int main() { 
    int k;
    cin>>k;
    int ans=0;
    for(int i=1;i<=k;i++){
        for(int j=1;j<=k;j++){
            int res=gcd(i,j);
            for(int l=1;l<=k;l++){
                 int res2=gcd(res,l);
                 // cout<<i<<" "<<j<<" "<<l<<" "<<res<<endl;
                 ans+=res2;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}