#include<iostream>
using namespace std;
int main() {
    string s;
    cin>>s;
    int ans=0;
    int count=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='R')count++;
        else count=0;
        ans=max(ans,count);
    }
    cout<<ans<<endl;
    return 0;
}