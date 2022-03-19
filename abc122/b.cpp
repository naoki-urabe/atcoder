#include<iostream>
#include<string>
using namespace std;
int main() {
    string s;
    string T="ACGT";
    cin>>s;
    int n=s.size();
    int ans=0;
    for(int l=0;l<n;l++){
        for(int r=0;r<n;r++){
            bool ok=true;
            for(int i=l;i<=r;i++){
                if(T.find(s[i])==string::npos)ok=false;
            }
            if(ok)ans=max(ans,r-l+1);
        }
    }
    cout<<ans<<endl;
    return 0;
}