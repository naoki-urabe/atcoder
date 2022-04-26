#include <bits/stdc++.h>
using namespace std;
int main() { 
    int x,y,k;
    cin>>x>>y;
    cin>>k;
    int ans;
    if(y<=k){
        ans=y+(x-(k-y));
    }else{
        ans=x+k;
    }
    cout<<ans<<endl;
    return 0;
}