#include <iostream>
#include <deque>
#include <iterator>
 
using namespace std;
 
int main()
{
    deque<int> dq;
    int q,n,i,y,x,z,j;
    cin >> q;
    for(i=0;i<q;i++)
    {
        cin >> n;
        switch(n)
        {
        case 1:
		    cout << dq.front() << endl;     
            break;
        case 2:
		    cout << dq.back() << endl;
		    break;
		case 3:
		    cin >> x;
		    dq.push_front(x);
		    break;
		case 4:
		    cin >> x;
		    dq.push_back(x);
		    break;
		case 5:
		    dq.pop_front();
		    break;
		case 6:
		    dq.pop_back();
		    break;
		case 7:
            cout << dq.size() << endl;
            break;
        }
    }
    return 0;
}

		    
		    
		
		        