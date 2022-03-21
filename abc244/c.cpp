#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    bool arr[2*n+2]={false};
    int pos=1;
    while(true){
        cout<<pos<<endl;
        cout<<flush;
        arr[pos]=true;
        int tmp;
        cin>>tmp;
        if(tmp==0)return 0;
        arr[tmp]=true;
        while(arr[pos])pos++;
    }
    return 0;
}