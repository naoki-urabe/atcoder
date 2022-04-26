#include <bits/stdc++.h>
using namespace std;
int main() { 
    int n,d;
    cin>>n>>d;
    int x[n][d]={0};
    for(int i=0;i<n;i++){
        for(int j=0;j<d;j++){
            cin>>x[i][j];
        }
    }
    int ans=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            double sum=0;
            for(int k=0;k<d;k++){
                int diff=abs(x[i][k]-x[j][k]);
                sum+=diff*diff;
            }
            double tmp = (int)sqrt(sum);
            sum=sqrt(sum);
            if(floor(tmp)==sum)ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}