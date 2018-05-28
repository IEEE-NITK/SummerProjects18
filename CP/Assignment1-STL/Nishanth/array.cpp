#include <iostream>
#include<array>
#include<algorithm>
#include<string.h>

using namespace std;

int main()
{
    int q,n,i,x,y;
    int arr[1000];
    memset(arr,0,sizeof(arr));
    std::array<int,1000>::iterator low1, up1;
    cin >> q;
    for(i=0;i<q;i++)
    {
        cin >> n;
        switch(n)
        {
        case 1:
            cin >> x;
            cin >> y;
            arr[x]=y;
            break;
        case 2:
            sort(arr,arr+1000);
            break;
        case 3:
            cin >> x;
            low1 = lower_bound(arr,arr+1000,x);
            cout << low1 - (arr) << endl;
            break;
        case 4:
            cin >> x;
            up1 = upper_bound(arr,arr+1000,x);
            cout << up1 - (arr) << endl;
            break;
        case 5:
            {
                bool val = next_permutation(arr,arr+1000);
            if(val!=false)
            {
                for(i=0;i<1000;i++)
                    cout << arr[i] << " ";
                cout << "\n";
            }
            }
            break;
        case 6:
            {
                bool val = prev_permutation(arr,arr+1000);
            if(val!=false)
            {
                for(i=0;i<1000;i++)
                    cout << arr[i] << " ";
                cout << "\n";
            }
            }
            break;
        }
    }
    return 0;
}