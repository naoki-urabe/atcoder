#include <bits/stdc++.h>
using namespace std;
int main() { 
    string a,b,c,d;
    cin>>a>>b>>c>>d;
    string taka=a+b+"00";
    string ao=c+d+"01";
    if(taka>=ao)cout<<"Aoki"<<endl;
    else cout<<"Takahashi"<<endl;
    return 0;
}