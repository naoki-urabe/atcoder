#include <bits/stdc++.h>
using namespace std;
int main() { 
    int n,y;
    cin>>n>>y;
    bool flag=false;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n-i;j++){
            int k=n-i-j;
            if(i*10000+j*5000+k*1000==y){
                flag=true;
                cout<<i<<" "<<j<<" "<<k<<endl;
                return 0;
            }
        }
    }
    if(!flag)cout<<"-1 -1 -1"<<endl;
    return 0;
}