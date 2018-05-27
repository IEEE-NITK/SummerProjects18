#include <iostream>
#include <set>
#include <string>

#include <algorithm>
using namespace std;



int main(int argc, char const *argv[])
{

	set<int> s;
	int flag =0;
	int num;
	
	cin >> num;
	
	for (int k = 0; k < num; ++k)
	{
		int tmp;
		cin >> tmp;
		int el;
		int y;

		if(tmp==1 || tmp==7 || tmp==8)
		{
			cin >> el;
		}
		switch(tmp)
		{
			case 1:
				cout << endl;
				s.insert(el);
				break;

			case 2:
				cout << endl;
				cout << s.size();
				break;


			case 3:
				cout << endl;
				if(s.size()>0)
				{
					s.erase(s.begin());
				}
				else
				{
					cout << "set is empty" << endl;
				}
				cout << endl;
				
				break;
			case 4:
				cout << endl;
				if(s.size()>0)
				{
					cout << *s.begin() <<endl;
				}
				else
				{
					cout << "set is empty" << endl;
				}
				cout << endl;
				
				break;

			case 5:
				cout << endl;
				for (std::set<int>::iterator i = s.begin(); i != s.end(); ++i)
				{
					cout << *i << " ";
				}
				cout << endl;
				
				break;
			case 6:
				cout << endl;
				if(s.size()>0)
				{
					cout << *s.end() <<endl;
				}
				else
				{
					cout << "set is empty" << endl;
				}
				cout << endl;
				
				break;
			case 7:
				cout << endl;
				if(s.find(el) != s.end())
				{
					cout << "YES" << endl;
				}
				else
				{
					cout << "NO" << endl;
				}
				break;
			case 8:
				cout << endl;
				for (std::set<int>::iterator i = s.begin(); i != s.end(); ++i)
				{
					if(el == *i)
					{
						s.erase(i);
						cout << "element deleted";
						break;
					}
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