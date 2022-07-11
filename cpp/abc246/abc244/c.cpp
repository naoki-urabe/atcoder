#include <bits/stdc++.h>
using namespace std;
string which_group(string s) {
    if(s=="RGB"||s=="GBR"||s=="BRG")return "a";
    else return "b";
}
int main() { 
    string s1,s2,s3;
    string t1,t2,t3;
    cin>>s1>>s2>>s3;
    cin>>t1>>t2>>t3;
    if(which_group(s1+s2+s3)==which_group(t1+t2+t3))cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}