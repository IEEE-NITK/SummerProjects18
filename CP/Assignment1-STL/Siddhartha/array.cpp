#include <bits/stdc++.h>
using namespace std;
int main()
{
    int c,Q,x;
    cin >> Q;
    int ar[1000];
    void *ptr=ar;
    memset(ptr,0,sizeof(ar));
    while(Q--)
    {
        cin >>c;
        switch(c)
        {
        case 1 :
        {
            cin>>x;
            int y;
            cin>>y;
            ar[x]=y;
            break;
        }
        case 2 :
            sort(ar,ar+1000);
            break;
        case 3 :
        {
            sort(ar,ar+1000);
            cin>>x;
            int p=lower_bound(ar,ar+1000,x) - ar ;
            cout <<p<<endl;
            break;
        }
        case 4 :
        {
            sort(ar,ar+1000);
            cin>>x;
            int p=upper_bound(ar,ar+1000,x) - ar ;
            cout <<p<<endl;
            break;
        }
        case 5 :
        {
            next_permutation(ar,ar+1000);
            for(int i=0; i<1000; i++)
                cout<<ar[i]<<" ";
            cout<<endl;
            break;
        }
        case 6:
        {
            prev_permutation(ar,ar+1000);
            for(int i=0; i<1000; i++)
                cout<<ar[i]<<" ";
            cout<<endl;
            break;
        }
        }
    }
return 0;
}
