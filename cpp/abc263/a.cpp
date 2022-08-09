#include <bits/stdc++.h>
using namespace std;
int main() { 
    int arr[14]={0};
    for(int i=0;i<5;i++){
        int tmp;
        cin>>tmp;
        arr[tmp]++;
    }
    bool flag=true;
    for(int i=1;i<=13;i++){
        if(arr[i]!=2&&arr[i]!=3&&arr[i]!=0){
            flag=false;
        }
    }
    if(flag)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}