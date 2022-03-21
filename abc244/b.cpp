#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    string t;
    cin>>n>>t;
    int dx[4]={1,0,-1,0};
    int dy[4]={0,-1,0,1};
    int dir=0;
    int posx=0,posy=0;
    for(int i=0;i<n;i++){
        if(t[i]=='S'){
            posx+=dx[dir];
            posy+=dy[dir];
        } else {
            dir++;
            dir%=4;
        }
    }
    cout<<posx<<" "<<posy<<endl;
    return 0;
}