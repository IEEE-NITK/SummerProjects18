#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;



int main(int argc, char const *argv[])
{

	priority_queue<pair <int, pair<int, int> > >  pq;
	pair< int, pair<int, int> >  tmp_val;
	int flag =0;
	int num;
	int i;
	int j;
	
	cin >> num;
	
	for (int k = 0; k < num; ++k)
	{
		int tmp;
		cin >> tmp;
		int el;
		int el2;
		int el3;
		if(tmp==1)
		{
			cin >> el;
			cin >> el2;
			cin >> el3;
			//cout >> el;
			flag = 1;
		}
		switch(tmp)
		{
			case 1:
				tmp_val.first = el;
				tmp_val.second.first = el2;
				tmp_val.second.second = el3;
				pq.push(tmp_val);
				break;

			case 2:
				cout <<endl;
				if(!pq.empty())
				{
				tmp_val = pq.top();
				cout << "(" << tmp_val.first << ", (" << tmp_val.second.first << "," << tmp_val.second.second << "))" <<endl; 
				}
				else
				{
					cout << "Underflow" << endl;
				}

				
				break;


			case 3:

				if(!pq.empty())
				{
					pq.pop();
				}
				else
				{
					cout << "Underflow" << endl;
				}
				break;
			case 4:
				cout << pq.size() << endl;
				break;
			default:
				cout<< "invalid input" << endl;
				break;

		}

	}
	return 0;
}