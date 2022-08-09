#include <bits/stdc++.h>
using namespace std;
int main() { 
    int n,m,x,t,d;
    cin>>n>>m>>x>>t>>d;
    int base=t-d*x;
    cout<<base+d*min(x,m)<<endl;
    return 0;
}