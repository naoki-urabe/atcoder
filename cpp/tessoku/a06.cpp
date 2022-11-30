#include <bits/stdc++.h>
using namespace std;
int main() { 
    int n,q;
    cin>>n>>q;
    long long sum_arr[n+1]={0};
    long long sum=0;
    for(int i=1;i<=n;i++){
        int a;
        cin>>a;
        sum+=a;
        sum_arr[i]=sum;
    }
    for(int i=0;i<q;i++){
        int l,r;
        cin>>l>>r;
        cout<<sum_arr[r]-sum_arr[l-1]<<endl;
    }
    return 0;
}