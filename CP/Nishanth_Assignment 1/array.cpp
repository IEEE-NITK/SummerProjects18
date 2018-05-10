#include <iostream>
#include<array>
#include<algorithm>
#include<string.h>

using namespace std;

int main()
{
    int q,n,i,x,y;
    int arr[3];
    memset(arr,0,sizeof(arr));
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
            sort(arr,arr+3);
            break;
        case 3:
            cin >> x;
            for(i=0;i<3;i++)
                if(arr[i]==x)
                    {
                        cout << i << "\n";
                        break;
                    }
            break;
        case 4:
          cin >> x;
            for(i=2;i>=0;i--)
                if(arr[i]==x)
                    {
                        cout << i << "\n";
                        break;
                    }
            break;
        case 5:
            {
                bool val = next_permutation(arr,arr+3);
            if(val!=false)
            {
                for(i=0;i<3;i++)
                    cout << arr[i] << " ";
                cout << "\n";
            }
            }
            break;
        case 6:
            {
                bool val = prev_permutation(arr,arr+3);
            if(val!=false)
            {
                for(i=0;i<3;i++)
                    cout << arr[i] << " ";
                cout << "\n";
            }
            }
            break;
        }
    }
    return 0;
}