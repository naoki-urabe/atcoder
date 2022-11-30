#include <bits/stdc++.h>
using namespace std;
int main() { 
    int d,n;
    cin>>d>>n;
    int pre[100001]={0};
    for(int i=0;i<n;i++){
        int l,r;
        cin>>l>>r;
        pre[l]++;
        pre[r+1]--;
    }
    int sum=0;
    for(int i=1;i<=d;i++){
        sum+=pre[i];
        cout<<sum<<endl;
    }
    return 0;
}