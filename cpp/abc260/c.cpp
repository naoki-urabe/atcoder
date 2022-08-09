#include <bits/stdc++.h>
using namespace std;
int x,y,red_count=1,blue_count=0,lv_red,lv_blue;
long long calc(int lv, bool is_red) {
    if(lv==1)return is_red?0:1;
    if(is_red) {
        return calc(lv-1,true)+calc(lv, false)*x;
    } else {
        return calc(lv-1,true)+calc(lv-1, false)*y;
    }
}
int main() {
    int n; 
    cin>>n>>x>>y;
    lv_red=n;
    cout<<calc(n, true)<<endl;
    return 0;
}