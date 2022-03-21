#include<bits/stdc++.h>
using namespace std;
int main() {
    int N;
    long long K;
    cin>>N>>K;
    vector<int> A(N);
    for(int i=0;i<N;i++)cin>>A[i],A[i]--;
    bool visit[N]={false};
    int cur=0;
    deque<int> a;
    while(true){
        if(visit[cur]){
            while(a[0]!=cur){
                a.pop_front();
                K--;
                if(K==0){
                    cout<<a[0]+1<<endl;
                    return 0;
                }
            }
            break;
        }
        visit[cur]=true;
        a.push_back(cur);
        cur=A[cur];
    }
    cout<<a[K%a.size()]+1<<endl;
    return 0;
}