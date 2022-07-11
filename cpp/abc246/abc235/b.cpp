#include <bits/stdc++.h>
using namespace std;
int main() { 
    int n;
    cin>>n;
    vector<int> h(n,0);
    for(int i=0;i<n;i++)cin>>h[i];
    int ans=h[0];
    for(int i=1;i<n;i++){
        if(h[i-1]<h[i]){
            ans=h[i];
        }else{
            break;
        }
    }
    cout<<ans<<endl;
    return 0;
}