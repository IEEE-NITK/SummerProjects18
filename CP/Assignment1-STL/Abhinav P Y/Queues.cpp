#include<iostream>
#include<queue>

using namespace std;

int main()
{
    int qnum, qtype, x;
    queue <int> Q1;

    cin>>qnum;

    for(int i=0; i<qnum; ++i)
    {
        cin>>qtype;

        switch(qtype)
        {
            case 1:
                cout<<Q1.front()<<endl;
                break;

            case 2:
                cout<<Q1.back()<<endl;
                break;

            case 3:
                cin>>x;
                Q1.push(x);
                break;

            case 4:
                Q1.pop();
                break;

            case 5:
                cout<<Q1.size()<<endl;
                break;

            default:
                cout<<"Invalid query type!!"<<endl;
        }
    }

    return 0;
}