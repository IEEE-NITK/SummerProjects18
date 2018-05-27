#include <iostream>
#include <map>
#include <string>

#include <algorithm>
using namespace std;



int main(int argc, char const *argv[])
{

	map<string, int> m;
	int flag =0;
	int num;
	
	cin >> num;
	
	for (int k = 0; k < num; ++k)
	{
		int tmp;
		cin >> tmp;
		string x;
		int y;

		if(tmp==1 || tmp==2 || tmp==3)
		{
			cin >> x;
		}
		if(tmp==1)
		{
			cin >>y;
		}
		switch(tmp)
		{
			case 1:
				m[x] = y;
				break;

			case 2:
				cout << endl;
				if(m.find(x)==m.end())
				{
					cout << "not present" << endl;
				}
				else
				{
					cout << m[x] << endl;
				}
				break;


			case 3:
				cout <<  endl;
				if(m.find(x)==m.end())
				{
					cout << "not present" << endl;
				}
				else
				{
					cout << "present and value is " << m[x] << endl;
				}
				break;
			case 4:
				for (std::map<string,int>::iterator i = m.begin(); i != m.end(); ++i)
				{
					cout << "(" << i->first << "," << i->second << ")" << " ";
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