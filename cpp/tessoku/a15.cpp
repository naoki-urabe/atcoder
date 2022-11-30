#include <bits/stdc++.h>
using namespace std;
int main() { 
    int n;
    cin>>n;
    set<int> st;
    int a[n];
    for(int i=0;i<n;i++){
        int tmp;
        cin>>tmp;
        a[i]=tmp;
        st.insert(tmp);
    }
    vector<int> sort_a;
    for(auto itr=st.begin();itr!=st.end();itr++){
        sort_a.push_back(*itr);
    }
    for(int i=0;i<n;i++){
        int v=a[i];
        int left=-1,right=sort_a.size();
        while(right-left>1){
            int mid=(right+left)/2;
            if(sort_a[mid]>v){
                right=mid;
            }else {
                left=mid;
            }
        }
        cout<<left+1<<" ";
    }
    cout<<endl;
    return 0;
}