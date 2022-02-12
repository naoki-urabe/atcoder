#include<iostream>
#include<vector>
using namespace std;
int a[20][20];
vector<pair<int, int>> vec;
int visit[20];
int n;
int calc() {
    int sum=0;
    if(vec.size()==n){
        for(auto itr :vec){
            sum^=a[itr.first][itr.second];
        }
        return sum;
    }
    int l;
    for(int i=1;i<=2*n;i++){
        if(!visit[i]){
            l=i;
            break;
        }
    }
    visit[l]=true;
    int ret=0;
    for(int i=1;i<=2*n;i++){
        if(!visit[i]){
            visit[i]=true;
            vec.push_back({l,i});
            ret=max(ret,calc());
            vec.pop_back();
            visit[i]=false;
        }
    }
    visit[l]=false;
    return ret;
}
int main() {
    cin>>n;
    for(int i=1;i<=2*n-1;i++){
        for(int j=i+1;j<=2*n;j++){
            cin>>a[i][j];
        }
    }
    cout<<calc()<<endl;
    return 0;
}