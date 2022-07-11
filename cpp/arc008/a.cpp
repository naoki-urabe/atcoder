#include <bits/stdc++.h>
using namespace std;
int main() { 
    int n;
    cin>>n;
    int ans=100*(n/10)+(n%10>=7?100:15*(n%10));
    cout<<ans<<endl;
    return 0;
}