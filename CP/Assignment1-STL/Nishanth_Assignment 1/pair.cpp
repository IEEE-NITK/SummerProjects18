
#include <iostream>
#include <utility>
#include<algorithm>
#include<array>
#include<string.h>
using namespace std;
bool order(const pair<int,int> &a,
              const pair<int,int> &b)
{
    if(a.second != b.second)
       return(a.second<b.second);
    else
       return(a.first<b.first);
}
int main()
{
    pair <int, int> arr[1000];
    memset(arr,0,sizeof(arr));
    int q,n,i,x,y,z,j;
    cin >> q;
    for(i=0;i<q;i++)
    {
        cin >> n;
        switch(n)
        {
        case 1:
            cin >> x;
            cin >> y;
            cin >> z;
            arr[x].first=y;
            arr[x].second=z;
            break;
        case 2:
            cin >> x;
            switch(x)
            {
                case 1:
                sort(arr,arr+3);
                break;
                case 2:
                sort(arr, arr+1000, order);
                break;
            }
            break;
        case 3:
        for(j=0;j<1000;j++)
            cout << "(" << arr[j].first << "," << arr[j].second << ")" << " ";
        break;
        }
    }
    return 0;
}