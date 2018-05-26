#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[1000];
    memset(arr,0,sizeof(int)*1000);
    int Q;
    cin>>Q;
    while(Q--)
    {
        int choice,x,y;
        cin>>choice;
        if(choice==1)
        {
            cin>>x>>y;
            arr[x-1]=y;
        }
        else if(choice==2)
            sort(arr,arr+1000);
        else if(choice==3)
        {
            cin>>x;
            cout<<lower_bound(arr,arr+1000,x)-arr<<endl;
        }
        else if(choice==4)
        {
            cin>>x;
            cout<<upper_bound(arr,arr+1000,x)-arr<<endl;
        }
        else if(choice==5)
        {
            next_permutation(arr,arr+1000);
            for(int a:arr)
                cout<<a<<" ";
            cout<<endl;
        }
        else
        {
            prev_permutation(arr,arr+1000);
            for(int a:arr)
                cout<<a<<" ";
            cout<<endl;
        }
    }
    return 0;
}
