#include <bits/stdc++.h>
using namespace std;
int main() { 
    string s;
    map<char, int> mp={{'a',0 }, {'t',1}, {'c', 2}, {'o', 3}, {'d', 4}, {'e', 5}, {'r', 6}};
    cin>>s;
    int arr[6];
    for(int i=0;i<6;i++){
        arr[i]=mp[s[i]];
    }
    for(int i=0;i<6;i++)cout<<arr[i];
    cout<<endl;
    int ans=0;
    while(true){
        bool flag=true;
        for(int i=5;i>=1;i--){
            if(arr[i-1]>arr[i]){
                int tmp=arr[i-1];
                arr[i-1]=arr[i];
                arr[i]=tmp;
                ans++;
                flag=false;
            }
        }
        for(int i=0;i<6;i++)cout<<arr[i];
        cout<<endl;
        if(flag)break;
    }
    cout<<ans<<endl;
    return 0;
}