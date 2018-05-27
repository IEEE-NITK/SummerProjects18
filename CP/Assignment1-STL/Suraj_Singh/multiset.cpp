#include <iostream>
#include <set>
#include <string>
#include <iterator>
#include <algorithm>
using namespace std;



int main(int argc, char const *argv[])
{

	multiset <pair<int, pair<int ,int> > > ms;
	pair<int, pair<int ,int> > tmp_val ;
	int flag =0;
	int num;
	
	cin >> num;
	
	for (int k = 0; k < num; ++k)
	{
		int tmp;
		cin >> tmp;
		int el;
		int el2;
		int el3;
		int y;

		if(tmp==1 )
		{
			cin >> el;
			cin >> el2;
			cin >> el3;
		}
		switch(tmp)
		{
			case 1:
				cout << endl;
				tmp_val.first = el;
				tmp_val.second.first = el2;
				tmp_val.second.second = el3;
				ms.insert(tmp_val);
				break;

			case 2:
				//tmp_val = ms.begin()
				cout << "(" << (*ms.begin()).first << ", (" << (*ms.begin()).second.first << "," << (*ms.begin()).second.second << "))" << endl; 
				break;


			case 3:
				if(!ms.empty())
					ms.erase(ms.begin());
				else
				{
					cout << "underflow" << endl;
				}
				break;

			case 4:
				cout << endl;
				for (std::multiset<pair< int, pair<int,int> > >::iterator i = ms.begin(); i != ms.end(); i++)
				{
					cout << "(" << (*i).first << ", (" << (*i).second.first << "," << (*i).second.second << ")) ";
				}
				cout << endl;
				

			 	break;


			default:
				cout<< "invalid input" << endl;
				break;
		}

	}
	return 0;
}