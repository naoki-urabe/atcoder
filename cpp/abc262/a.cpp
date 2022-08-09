#include <bits/stdc++.h>
using namespace std;
int main() { 
    int y;
    cin>>y;
    int d=y/4,m=y%4;
    if(m==2){
        cout<<y<<endl;
    } else if(m==3) {
        cout<<4*(d+1)+2<<endl;
    } else {
        cout<<4*(d)+2<<endl;
    }

    return 0;
}