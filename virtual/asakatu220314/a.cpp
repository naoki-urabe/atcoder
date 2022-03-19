#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int> abc(3);
    for(int i=0;i<3;i++){
        cin>>abc[i];
    }
    if(abc[0]==abc[1]&&abc[1]==abc[2])cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}