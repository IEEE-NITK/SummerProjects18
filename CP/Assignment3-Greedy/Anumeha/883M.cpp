#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#define inf (ll)9e18
typedef long long ll;

int main(){
    int x1,y1;
    cin>>x1>>y1;
    int x2,y2;
    cin>>x2>>y2;
    if(x1==x2){
        cout<<4+2*(abs(y2-y1)+1)<<endl;
    }
    else if(y1==y2){
        cout<<4+2*(abs(x1-x2)+1)<<endl;
        
    }
    else{
        cout<<2*(abs(y1-y2)+1)+2*(abs(x1-x2)+1)<<endl;
    }
}
    