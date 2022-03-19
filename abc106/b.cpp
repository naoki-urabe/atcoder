#include<iostream>
#include<vector>
using namespace std;

vector<int> enumdivs(int n) {
    vector<int> divs;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            divs.push_back(i);
            if(i*i<n)divs.push_back(n/i);
        }
    }
    return divs;
}

int main() {
    int n,ans=0;
    cin>>n;
    for(int i=1;i<=n;i+=2){
        vector<int> divs=enumdivs(i);
        if(divs.size()==8)ans++;
    }
    cout<<ans<<endl;
    return 0;
}