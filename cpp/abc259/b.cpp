#include <bits/stdc++.h>
using namespace std;
int main() { 
    double a,b,d;
    cin>>a>>b>>d;
    double pi=4*atan(1);
    double l=hypot(a,b);
    double theta=atan2(b,a);
    theta+=d*pi/180.0;
    printf("%.10lf %.10lf\n", l*cos(theta),l*sin(theta));
    return 0;
}