#include <bits/stdc++.h>
using namespace std;
int snow[2000][2000]={0};
int main() { 
    int h,w,n;
    cin>>h>>w>>n;
    for(int i=0;i<n;i++){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        snow[a][b]++;
        snow[a][d+1]--;
        snow[c+1][b]--;
        snow[c+1][d+1]++;
    }
    int sumh[2000]={0};
    for(int j=1;j<=h;j++){
        int sumw=0;
        for(int k=1;k<=w;k++){
            sumw+=snow[j][k];
            snow[j][k]=sumw;
        }
    }
    for(int k=1;k<=w;k++){
        int sumh=0;
        for(int j=1;j<=h;j++){
            sumh+=snow[j][k];
            snow[j][k]=sumh;
        }
    }
    for(int i=1;i<=h;i++){
        for(int j=1;j<=w;j++){
            cout<<snow[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}