#include<bits/stdc++.h>
using namespace std;
int main() {
    long long n;
    cin>>n;
    long long l,h;
    l=(long long)(pow(-2,31));
    h=(long long)(pow(2,31));
    if(l<=n && n<h)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}