#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    set<int> kind;
    cin>>n;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        kind.insert(a);
    }
    cout<<kind.size()<<endl;
    return 0;
}