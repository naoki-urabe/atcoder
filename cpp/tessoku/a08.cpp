#include <bits/stdc++.h>
using namespace std;
int sum_x[2000][2000]={0};
int main() { 
    int h,w;
    cin>>h>>w;
    for(int i=1;i<=h;i++){
        int sum=0;
        for(int j=1;j<=w;j++){
            int x;
            cin>>x;
            sum+=x;
            sum_x[i][j]=sum;
        }
    }
    int q;
    cin>>q;
    for(int i=0;i<q;i++){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int ans=0;
        for(int j=a;j<=c;j++){
            ans+=sum_x[j][d]-sum_x[j][b-1];
        }
        cout<<ans<<endl;
    }
    return 0;
}