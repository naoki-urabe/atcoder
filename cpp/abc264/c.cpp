#include <bits/stdc++.h>
using namespace std;

int main() { 
    int h1,w1,h2,w2;
    int a[11][11]={0};
    int b[11][11]={0};
    cin>>h1>>w1;
    for(int i=0;i<h1;i++){
        for(int j=0;j<w1;j++){
            cin>>a[i][j];
        }
    }
    cin>>h2>>w2;
    for(int i=0;i<h2;i++){
        for(int j=0;j<w2;j++){
            cin>>b[i][j];
        }
    }
    for(int i=0;i<1<<h1;i++){
        for(int j=0;j<1<<w1;j++){
            vector<int> hvec,wvec;
            for(int k=0;k<h1;k++)if(!(i&(1<<k)))hvec.push_back(k);
            for(int k=0;k<w1;k++)if(!(j&(1<<k)))wvec.push_back(k);
            if(hvec.size()!=h2||wvec.size()!=w2)continue;
            bool flag=true;
            for(int k=0;k<h2;k++){
                for(int l=0;l<w2;l++){
                    if(a[hvec[k]][wvec[l]]!=b[k][l]){
                        flag=false;
                    }
                }
            }
            if(flag){
                cout<<"Yes"<<endl;
                return 0;
            }
        }
    }
    cout<<"No"<<endl;
    return 0;
}