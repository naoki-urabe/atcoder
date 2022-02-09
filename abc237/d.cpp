#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    string s;
    cin>>n;
    cin>>s;
    deque<int> a;
    a.push_back(n);
    for(int i=n-1;i>=0;i--){
        if(s[i]=='R')a.push_front(i);
        else a.push_back(i);
    }
    for(auto itr=a.begin();itr!=a.end();itr++){
        cout<<*itr<<" ";
    }
    cout<<endl;
    return 0;
}