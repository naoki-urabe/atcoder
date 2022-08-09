#include <bits/stdc++.h>
using namespace std;
int main() { 
    string s;
    cin>>s;
    int count[27]={0};
    for(int i=0;i<3;i++){
        count[s[i]-'a']++;
    }
    for(int i=0;i<27;i++){
        if(count[i]==1){
            cout<<char('a'+i)<<endl;
            return 0;
        }
    }
    cout<<-1<<endl;
    return 0;
}