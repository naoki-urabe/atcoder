#include<iostream>
using namespace std;
int main() {
    int v;
    int abc[3];
    cin>>v;
    for(int i=0;i<3;i++){
        cin>>abc[i];
    }
    while(v>=0){
        for(int i=0;i<3;i++){
            v-=abc[i];
            if(v<0){
                if(i==0)cout<<"F"<<endl;
                if(i==1)cout<<"M"<<endl;
                if(i==2)cout<<"T"<<endl;
                break;
            }
        }
    }
    return 0;
}