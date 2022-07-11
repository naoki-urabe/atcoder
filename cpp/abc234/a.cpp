#include <bits/stdc++.h>
using namespace std;
int func(int t){
    return t*t+2*t+3;
}
int main() { 
    int t;
    cin>>t;
    cout<<func(func(func(t)+t)+func(func(t)))<<endl;
    return 0;
}