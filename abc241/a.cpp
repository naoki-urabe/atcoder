#include<iostream>
#include<vector>
using namespace std;
int main() {
    vector<int> a(10);
    for(int i=0;i<10;i++){
        cin>>a[i];
    }
    int ans=0;
    int idx=0;
    for(int i=0;i<3;i++){
        ans=a[idx];
        idx=a[idx];
    }
    cout<<ans<<endl;
    return 0;
}