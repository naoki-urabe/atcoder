#include <bits/stdc++.h>
using namespace std;
int main() { 
    int n;
    cin>>n;
    vector<int> x(n,0);
    vector<int> y(n,0);
    for(int i=0;i<n;i++){
        cin>>x[i]>>y[i];
    }
    double ans=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int dist_x=abs(x[i]-x[j]);
            int dist_y=abs(y[i]-y[j]);
            double res=sqrt(dist_x*dist_x+dist_y*dist_y);
            ans=max(ans,res);
        }
    }
    printf("%.10lf\n",ans);
    return 0;
}