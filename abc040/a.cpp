#include <bits/stdc++.h>
using namespace std;
int main() { 
    int n;
    cin>>n;
    int t=0,a=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            char tmp;
            cin>>tmp;
            if(tmp=='R')t++;
            else if(tmp=='B') a++;
        }
    }
    if(t==a){
        cout<<"DRAW";
    }else if(t>a){
        cout<<"TAKAHASHI";
    }else {
        cout<<"AOKI";
    }
    cout<<endl;
    return 0;
}