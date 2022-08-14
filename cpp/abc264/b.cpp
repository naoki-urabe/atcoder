#include <bits/stdc++.h>
using namespace std;
int main() { 
    bool mat[15][15]={0};
    int curx=0,cury=0;
    bool flag=true;
    int r,c;
    cin>>r>>c;
    for(int k=0;k<=7;k++){
        for(int i=curx;i<15-curx;i++){
            for(int j=cury;j<15-cury;j++){
                mat[i][j]=flag;
            }
        }
        curx++;
        cury++;
        flag=!flag;
    }
    /*for(int i=0;i<15;i++){
        for(int j=0;j<15;j++){
            if(mat[i][j])cout<<".";
            else cout<<"#";
        }
        cout<<endl;
    }*/
    if(mat[r-1][c-1])cout<<"black"<<endl;
    else cout<<"white"<<endl;
    return 0;
}