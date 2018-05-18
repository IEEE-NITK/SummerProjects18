//Double Ended Queue is also known as Deque
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int qtype, qnum, x, y;
    deque <int> DQ1;

    cin>>qnum;

    for(int i=0; i<qnum; ++i)
    {
        cin>>qtype;

        switch(qtype)
        {
            case 1: 
                cout<<DQ1.front()<<endl;
                break;

            case 2:
                cout<<DQ1.back()<<endl;
                break;

            case 3:
                cin>>x;
                DQ1.push_front(x);
                break;

            case 4:
                cin>>x;
                DQ1.push_back(x);
                break;

            case 5: 
                DQ1.pop_front();
                break;

            case 6:
                DQ1.pop_back();
                break;

            case 7:
                cout<<DQ1.size()<<endl;
                break;

            default:
                cout<<"Invalid Query type!!!"<<endl;
        }
    }
    return 0;
}