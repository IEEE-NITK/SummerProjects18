#include<bits/stdc++.h>
using namespace std;

int main()

{

    int N,d,sum=0;

    cin>>N;

    for(int i=0;i<N;i++)

    {
        cin>>d;

        sum+=d;

    }

if (sum==2*(N-1))

    cout<<"Yes"<<endl;

else

    cout<<"No"<<endl;

}