#include <bits/stdc++.h>
using namespace std;
int gcd(int q,int r){
    while(q%r!=0){
        int tmp=q%r;
        q=r;
        r=tmp;
    }
    return r;
}

int main() {
    int w,h;
    cin>>w>>h;
    int div=gcd(w,h);
    printf("%d:%d\n",w/div,h/div);
    return 0;
}