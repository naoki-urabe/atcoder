#include <bits/stdc++.h>
using namespace std;
int main() { 
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    long long sum=0;
    int r=1;
    for(int i=0;i<n-1;i++){
        while(r!=n&&a[r]-a[i]<=k){
            r++;
        }
        sum+=r-(i+1);
    }
    cout<<sum<<endl;
    return 0;
}