#include <bits/stdc++.h>
#include <cstdio>
using namespace std;
int main() { 
    int a,b,c,x;
    cin>>a>>b>>c>>x;
    double prob=1;
    if(x<a+1)cout<<printf("%.10lf", prob)<<endl;
    else if(a+1<=x&&x<=b)cout<<printf("%.10lf",(double)c/(b-a))<<endl;
    else {
        prob=0;
        cout<<printf("%.10lf", 0.0)<<endl;
    }
    return 0;
}