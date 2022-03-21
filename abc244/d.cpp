#include<bits/stdc++.h>
using namespace std;
int main() {
    string s1,s2,s3,t1,t2,t3;
    cin>>s1>>s2>>s3;
    cin>>t1>>t2>>t3;
    string s=s1+s2+s3;
    string t=t1+t2+t3;
    if((s=="RGB"||s=="GBR"||s=="BRG")&&(t=="RGB"||t=="GBR"||t=="BRG"))cout<<"Yes"<<endl;
    else if((s=="RBG"||s=="GRB"||s=="BGR")&&(t=="RBG"||t=="GRB"||t=="BGR"))cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}