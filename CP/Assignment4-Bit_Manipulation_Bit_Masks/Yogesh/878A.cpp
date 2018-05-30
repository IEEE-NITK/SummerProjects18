#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num_and=0,num_or=0,num_xor=0;
    int n,bit;
    cin>>n;
    vector<char> c(n);
    vector<int> v(n);
    for(int i=0;i<n;i++)
        cin>>c[i]>>v[i];
    for(int j=0;j<10;j++)
    {
        int a=1,b=0;
        for(int i=0;i<n;i++){
            bit=!(!(v[i]&(1<<j)));
            if(c[i]=='&'){
                a=a&bit;
                b=b&bit;
            }
            else if(c[i]=='|'){
                a=a|bit;
                b=b|bit;
            }
            else{
                a=a^bit;
                b=b^bit;
            }
        }
        if(a==1&&b==0)
            num_and=num_and|(1<<j);
        else if(a==1&&b==1){
            num_or=num_or|(1<<j);
            num_and=num_and|(1<<j);
        }
        else if(a==0&&b==1){
            num_and=num_and|(1<<j);
            num_xor=num_xor^(1<<j);
        }


    }
    cout<<3<<endl;
    cout<<"& "<<num_and<<endl<<"| "<<num_or<<endl<<"^ "<<num_xor<<endl;
}
