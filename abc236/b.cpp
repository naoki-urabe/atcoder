#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int all = 0;
    for(int i=1;i<=n;i++){
        all+=i;
    }
    all=4*all;
    int sum=0;
    int a;
    for(int i=0;i<4*n-1;i++){
        cin>>a;
        sum+=a;
    }
    cout<<all-sum<<endl;
    return 0;
}