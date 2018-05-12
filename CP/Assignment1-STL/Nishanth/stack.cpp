#include <iostream>
#include <stack>
 
using namespace std;
 
int main()
{
    stack<int> sk;
    int q,n,i,y,x,z,j;
    cin >> q;
    for(i=0;i<q;i++)
    {
        cin >> n;
        switch(n)
        {
        case 1:
            cout << sk.top() << "\n";
            break;
        case 2:
	cin >> x;
	sk.push(x);
	 break;
       case 3:
	 sk.pop();
	break;
      case 4:
	cout << sk.size() << "\n";
	break;
        }
    }
    return 0;
}