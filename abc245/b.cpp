#include <bits/stdc++.h>
using namespace std;
int main() { 
    int n;
    cin>>n;
    vector<bool> a(2001,0);
    for(int i=0;i<n;i++){
        int tmp;
        cin>>tmp;
        a[tmp]=true;
    }
    for(int i=0;i<=2000;i++){
        if(!a[i]){
            cout<<i<<endl;
            break;
        }
    }
    return 0;
}