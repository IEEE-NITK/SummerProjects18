#include <iostream>
#include<set>
#include<algorithm>
#include<string.h>
#include <iterator>

using namespace std;

int main()
{
    int q,n,i,x,y,z;
    multiset <pair < int , pair<int,int> > > mset;
    multiset <pair < int , pair<int,int> > > :: iterator itr;
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
            mset.insert(make_pair(x,make_pair(y,z)));
            break;
        case 2:
            itr = --mset.end();
            cout << "(" << (*itr).first << ",(" << (*itr).second.first << "," << (*itr).second.second << "))\n";
            break;
        case 3:
            itr = --mset.end();
            mset.erase(*itr);
            break;
        case 4:
            for (itr = mset.begin(); itr != mset.end(); ++itr)
                cout << "(" << (*itr).first << ",(" << (*itr).second.first << "," << (*itr).second.second << "))\t";
            cout << endl;
            break;
        case 5:
            cout << mset.size() << "\n";
            break;
            
            
        }
    }
    return 0;
}