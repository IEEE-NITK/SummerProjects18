
#include <iostream>
#include <utility>
#include<algorithm>
#include<map>
#include<iterator>
#include<string.h>
using namespace std;
int main()
{
    map<string, int> mp;
    int q,n,i,y,z,j;
    string x;
    cin >> q;
    for(i=0;i<q;i++)
    {
        cin >> n;
        switch(n)
        {
        case 1:
            cin >> x;
            cin >> y;
		    mp.insert(pair <string, int> (x, y));     
            break;
        case 2:
           {
                cin >> x;
		        map <string, int> :: iterator itr;
                itr = mp.find(x);
		        cout << itr->second << "\n";
           }
            break;
        case 3:
		{
		    cin >> x;
		    map <string, int> :: iterator itr;
		    itr = mp.find(x);
		    if(itr!=mp.end())
		        cout << "YES" << "\n";
		    else 
		        cout << "NO" << "\n";
		}
        break;
        case 4:
        {
        map <string, int> :: iterator itr;
        for (itr = mp.begin(); itr != mp.end(); ++itr)
            {
                cout << "(" << itr->first <<  "," << itr->second << ")";
            }
        cout << '\n';
        }
        break;
    }
    }
    return 0;
}