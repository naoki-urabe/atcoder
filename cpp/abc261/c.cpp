#include <bits/stdc++.h>
using namespace std;
int main() { 
    int n;
    cin>>n;
    map<string, int> count;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        if(count.find(s)==count.end()){
            count[s]=1;
            cout<<s<<endl;
        } else {
            cout<<s<<"("<<count[s]<<")"<<endl;
            count[s]+=1;
        }
    }
    return 0;
}