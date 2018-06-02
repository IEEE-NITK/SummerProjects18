#include<bits/stdc++.h>

using namespace std;


int main()
{
    int A[1000];
    memset(A,0,sizeof(A));

    int qnum, qtype, x,y;
    cin>>qnum;

    for(int i = 0; i<qnum; ++i)
    {
        cin>>qtype;
        switch(qtype)
        {
            case 1:
            {
                cin>>x;
                cin>>y;
                A[x] = y;
                break;
            }

            case 2:
            {
                sort(&A[0],&A[999]);
                break;
            }

            case 3:
            {
                cin>>x;
                y = lower_bound(A[0],A[999],x);
                cout<<y<<endl;
                break;
            }

            case 4:
            {
                cin>>x;
                y = upper_bound(A[0],A[999],x);
                cout<<y<<endl;
                break;
            }

            case 5:
            {
                                    /*do {
                        std::cout << myints[0] << ' ' << myints[1] << ' ' << myints[2] << '\n';
                    } while ( std::next_permutation(myints,myints+3) );*/
                do {
                    for(int j = 0; j<1000; ++j)
                    cout<<A[j]<<" ";
                }while(next_permutation(A[0],A[999]));

                break;
            }

            case 6:
            {
                
                do {
                    for(int j = 0; j<1000; ++j)
                    cout<<A[j]<<" ";
                }while(prev_permutation(A[0],A[999]));

                break;
            }

            default:
            {
                cout<<"Invalid Query Type!!"<<endl;
                break;
            }
        }
    }

    return 0;
}

