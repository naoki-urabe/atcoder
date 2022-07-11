#include <bits/stdc++.h>
using namespace std;
int main() { 
    string s;
    cin>>s;
    int start=200000,end=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='A'){
            start=min(start,i);
        }
        if(s[i]=='Z'){
            end=max(end,i);
        }
    }
    cout<<end-start+1<<endl;
    return 0;
}