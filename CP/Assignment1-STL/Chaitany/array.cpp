#include<bits/stdc++.h>
using namespace std;
int main()
{

    int a[1000];
    memset(a,0,1000*sizeof(int));
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int x;
        cin>>x;
        switch(x)
        {
        case 1:
            int a1,b;
            cin>>a1>>b;
            a[a1]=b;
            break;
        case 2:
            sort(a,a+1000);
            break;
        case 3:
            int item;
            cin>>item;
            cout<<(lower_bound(a,a+1000,item))-a<<'\n';
            break;
        case 4:
            int item1;
            cin>>item1;
            cout<<(upper_bound(a,a+1000,item1))-a<<'\n';
            break;
        case 5:
            next_permutation(a,a+1000);
            for(int i=0; i<1000;i++)
                {
                    cout<<a[i]<<'\t';
                }
            cout<<'\n';
            break;
        case 6:
            prev_permutation(a,a+1000);
            for(int i=0; i<1000;i++)
                cout<<a[i]<<'\t';
            cout<<'\n';
            break;
        }
    }
}
