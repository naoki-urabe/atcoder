#include <bits/stdc++.h>
using namespace std;
int main() { 
    int n,k;
    cin>>n>>k;
    int a[100000];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int left=0,right=1000000000+1;
    while(right-left>1){
        int mid=(right+left)/2;
        long long sum=0;
        for(int i=0;i<n;i++){
            sum+=mid/a[i];
        }
        if(sum>=k){
            right=mid;
        } else {
            left=mid;
        }
        // cout<<left<<" "<<right<<endl;
    }
    cout<<right<<endl;
    return 0;
}