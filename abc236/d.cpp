#include<iostream>
#include<vector>
using namespace std;
int n;
int a[20][20];
vector<pair<int, int>> groups;
vector<int> visit(20,0);

int calc(){
    if(groups.size()==n) {
        int sum=0;
        for(auto itr: groups)sum^=(a[itr.first][itr.second]);
        return sum;
    }
    int l;
    for(int i=1;i<=2*n;i++){
        if(!visit[i]){
            l=i;
            break;
        }
    }
    int ret = 0;
    visit[l]=1;
    for(int i=1;i<=2*n;i++){
        if(!visit[i]){
            visit[i]=1;
            groups.push_back({l,i});
            ret = max(ret,calc());
            groups.pop_back();
            visit[i]=0;
        }
    }
    visit[l]=0;
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