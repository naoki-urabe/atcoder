#include <bits/stdc++.h>
using namespace std;
int main() { 
    int n,k;
    cin>>n>>k;
    vector<int> p(n+1,0);
    for(int i=1;i<=n;i++)cin>>p[i];
    vector<int> arr;
    for(int i=1;i<=k;i++){
        arr.push_back(p[i]);
    }
    sort(arr.begin(),arr.end());
    int min=arr[0];
    for(int i=k;i<=n;i++){
        if(min>p[i]){
            cout<<p[i]<<endl;
            min=p[i];
        } else {
            cout<<min<<endl;
        }
    }
    return 0;
}