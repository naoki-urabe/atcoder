#include<iostream>
using namespace std;
int main() {
    int n,m;
    cin>>n>>m;
    int a[n+1][m+1]={0};
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>a[i][j];
        }
    }
    long long ans=0;
    for(int l=1;l<m;l++){
        for(int r=l+1;r<=m;r++){
            long long sum=0;
            for(int h=1;h<=n;h++){
                if(a[h][l]>=a[h][r])sum+=a[h][l];
                else sum+=a[h][r];
            }
            ans=max(ans,sum);
        }
    }
    cout<<ans<<endl;
    return 0;
}