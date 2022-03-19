#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int x[n];
    int y[n];
    for(int i=0;i<n;i++){
        cin>>x[i]>>y[i];
    }
    string s;
    cin>>s;
    map<int, int> right_min;
    map<int, int> left_max;
    bool flag=false;
    for(int i=0;i<n;i++){
        if(s[i]=='L'){
            if(left_max.find(y[i])!=left_max.end()&&left_max[y[i]]<x[i]){
                flag=true;
            }
        }else{
            if(right_min.find(y[i])!=right_min.end()&&x[i]<right_min[y[i]]){
                flag=true;
            }
        }
        if(s[i]=='R'){
            if(left_max.find(y[i])==left_max.end()) {
                left_max[y[i]]=x[i];
            }else{
                left_max[y[i]]=min(x[i],left_max[y[i]]);
            }
        }else{
            if(right_min.find(y[i])==right_min.end()) {
                right_min[y[i]]=x[i];
            }else{
                right_min[y[i]]=max(x[i],right_min[y[i]]);
            }
        }
    }
    if(flag)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}