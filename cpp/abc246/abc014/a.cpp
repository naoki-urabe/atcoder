#include <bits/stdc++.h>
using namespace std;
int main() { 
    int a,b;
    cin>>a>>b;
    int i;
    for(i=1;;i++){
        if(a<=b*i){
            break;
        }
    }
    cout<<b*i-a<<endl;
    return 0;
}