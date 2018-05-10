#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    int q,n,i,x,y;
    vector <int> vct;
    vector <int> :: iterator itr;
    cin >> q;
    for(i=0;i<q;i++)
    {
        cin >> n;
        switch(n)
        {
        case 1:
            cin >> x;
            vct.push_back(x);
            break;
        case 2:
            cin >> x;
            cin >> y;
            vct[x]=y;
            break;
        case 3:
            {
                cin >> x;
                auto p = std::find(vct.begin(),vct.end(),x);
                if(p!=vct.end())
                    cout << "YES" << "\n";
                else
                    cout << "NO" << "\n";
            }
            break;
        case 4:
            {
                cin >> x;
                auto p = std::find(vct.begin(),vct.end(),x);
                vct.erase(p);
            }
            break;
        case 5:
            cout << vct.size() <<"\n";
            break;
        case 6:
            sort(vct.begin(),vct.end());
            break;
        case 7:
            for(i=0;i<vct.size();i++)
            {
                cout << vct[i] << " ";
            }
            cout << "\n";
            break;
        }
    }
    return 0;
}