#include<bits/stdc++.h>
using namespace std;
int main() {
    int a,b,c,x,y;
    cin>>a>>b>>c>>x>>y;
    int m=max(x,y)*2;
    int ans=2000000000;
    for(int i=0;i<=m;i+=2){
        int tmp_x=x,tmp_y=y;
        int cost=c*i;
        tmp_x=max(0,tmp_x-i/2);
        tmp_y=max(0,tmp_y-i/2);
        cost+=a*tmp_x+b*tmp_y;
        ans=min(ans,cost);
    }
    cout<<ans<<endl;
    return 0;
}