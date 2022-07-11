#include <bits/stdc++.h>
using namespace std;
int main() { 
    long long k;
    cin>>k;
    string s="";
    while(k!=0){
        s+=(k%2)+'0';
        k/=2;
    }
    reverse(s.begin(),s.end());
    for(int i=0;i<s.size();i++){
        if(s[i]=='1')cout<<"2";
        else cout<<s[i];
    }
    cout<<endl;
    return 0;
}