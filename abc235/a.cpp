#include <bits/stdc++.h>
using namespace std;
int main() { 
    char a,b,c;
    cin>>a>>b>>c;
    string abc,bca,cab;
    abc=string({a,b,c});
    bca=string({b,c,a});
    cab=string({c,a,b});
    cout<<stoi(abc)+stoi(bca)+stoi(cab)<<endl;
    return 0;
}