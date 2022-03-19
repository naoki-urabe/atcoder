#include<iostream>
using namespace std;
int main() {
    long long a,b,c,d;
    cin>>a>>b>>c>>d;
    if(b>=c){
        cout<<-1<<endl;
    }else{
        long long ans=0;
        while(true){
            if(a+ans*b<=c*d*ans){
                break;
            }
            ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}