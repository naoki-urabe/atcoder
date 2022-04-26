#include <bits/stdc++.h>
using namespace std;
int main() { 
    char big,small;
    cin>>big>>small;
    if(big-'0' == small-'0'-32)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}