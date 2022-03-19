#include<iostream>
using namespace std;
int main() {
    int a,b;
    string s;
    cin>>a>>b;
    cin>>s;
    bool flag=true;
    for(int i=0;i<a+b+1;i++){
        if((i==a&&s[i]!='-') || (i!=a&&(s[i]-'0'<0||s[i]-'0'>9))){
            flag=false;
        }
    }
    if(flag)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}