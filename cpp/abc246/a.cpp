#include <bits/stdc++.h>
using namespace std;
int main() { 
    map<int, int> mp_x;
    map<int, int> mp_y;
    for(int i=0;i<3;i++){
        int x,y;
        cin>>x>>y;
        if(mp_x.find(x)!=mp_x.end()){
            mp_x[x]+=1;
        }else {
            mp_x[x]=1;
        }
        if(mp_y.find(y)!=mp_y.end()){
            mp_y[y]+=1;
        }else {
            mp_y[y]=1;
        }
    }
    int ans_x,ans_y;
    for(int i=-100;i<=100;i++){
        if(mp_x[i]==1){
            ans_x=i;
        }
        if(mp_y[i]==1){
            ans_y=i;
        }
    }
    cout<<ans_x<<" "<<ans_y<<endl;
    return 0;
}