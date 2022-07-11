#include<bits/stdc++.h>
using namespace std;
/*
    疑問:
    right-left>1の条件式の意味は？
    ピースの最短がleftになる根拠は？
    
*/
int main() {
    int n,l,k;
    cin>>n>>l;
    cin>>k;
    vector<int> a(n,0);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int left=0,right=l,mid=0;
    while(right-left>1) {
        mid=(left+right)/2;
        int pre=0;
        int count=0;
        for(int i=0;i<n;i++){
            if(a[i]-pre>=mid&&l-a[i]>=mid){
                count++;
                pre=a[i];
            }
        }
        if(count>=k){
            left=mid;
        } else {
            right=mid;
        }
    }
    cout<<left<<endl;
    return 0;
}