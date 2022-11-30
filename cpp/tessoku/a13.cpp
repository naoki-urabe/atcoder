#include <bits/stdc++.h>
using namespace std;
int main() { 
    int n,k;
    cin>>n>>k;
    int a[n]={0};
    for(int i=0;i<n;i++)cin>>a[i];
    long long sum=0;
    for(int i=0;i<n-1;i++){
        int left=i-1,right=n;
        while(right-left>1){
            int mid=(right+left)/2;
            if(a[mid]-a[i]<=k){
                left=mid;
            } else {
                right=mid;
            }
        }
        // cout<<left<<" "<<right<<endl;
        sum+=left-i;
    }
    cout<<sum<<endl;
    return 0;
}