#include <bits/stdc++.h>
using namespace std;
int main() { 
    long long x;
    cin>>x;
    long long ans=x/10;
    if(x<0&&x%10!=0)ans-=1;
    cout<<ans<<endl;
    return 0;
}