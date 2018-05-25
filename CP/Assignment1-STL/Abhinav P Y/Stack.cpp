#include<iostream>
#include<stack>

using namespace std;

int main()
{
    stack <int> S1;     //declare a stack of integer type.
    int qnum,qtype, x;

    cin>>qnum;      //intakes the number of queries

    for(int i=0; i<qnum; ++i)
    {
        cin>>qtype;
            switch(qtype)                   //for each query type a particular function is called on the stack.
            {
                case 1:
                    cout<<S1.top()<<endl;
                    break;

                case 2:
                    cin>>x;
                    S1.push(x);
                    break;

                case 3:
                    S1.pop();
                    break;

                case 4:
                    cout<<S1.size()<<endl;
                    break;

                default:
                    cout<<"Invalid Query type"<<endl;
            }
    }
    return 0;
}