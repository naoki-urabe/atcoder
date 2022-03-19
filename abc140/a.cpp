#include<bits/stdc++.h>
using namespace std;
int main() {
    int a,b;
    cin>>a>>b;
    a%=10;
    b%=10;
    int diff = abs(a-b);
    if(diff==1 || diff==9){
        cout<<"Yes"<<endl;
    } else {
        cout<<"No"<<endl;
    }
    return 0;
}