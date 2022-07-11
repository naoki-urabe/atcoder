#include <bits/stdc++.h>
using namespace std;
int main() { 
    int n;
    string s;
    cin>>n;
    cin>>s;
    deque<int> q;
    q.push_front(n);
    for(int i=n-1;i>=0;i--){
        if(s[i]=='R'){
            q.push_front(i);
        } else {
            q.push_back(i);
        }
    }
    for(int i=0;i<q.size();i++){
        cout<<q[i]<<" ";
    }
    cout<<endl;
    return 0;
}