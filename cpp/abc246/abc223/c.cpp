#include <bits/stdc++.h>
using namespace std;
int main() { 
    int n;
    cin>>n;
    vector<double> a(n,0);
    vector<double> b(n,0);
    double t=0;
    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i];
        t+=a[i]/b[i];
    }
    t/=2;
    double ans=0;
    for(int i=0;i<n&&t>0;i++){
        ans+=min(a[i],b[i]*t);
        t-=a[i]/b[i];
    }
    printf("%.10lf\n",ans);
    return 0;
}