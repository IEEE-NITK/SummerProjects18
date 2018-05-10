#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main(int argc, char const *argv[])
{
	int num;
	vector<int> V; 
	int flag =0;
	cin >> num;
	int count;
	for (int k = 0; k < num; ++k)
	{
		int tmp;
		cin >> tmp;
		int el;
		int pos;

		if(tmp==2)
		{
			cin >> pos;
		}
		if(tmp==1 || tmp== 2 || tmp == 3 || tmp==4)
		{
			cin >> el;
			//cout >> el;
			flag = 1;
		}
		switch(tmp)
		{
			case 1:
				V.push_back(el);
				break;

			case 2:
				if(pos> V.size() || pos < 0)
				{
					cout << "Invalid input" << endl;
				}
				V[pos] = el;
				break;

			case 3:
				if (std::find(V.begin(), V.end(), el) != V.end())
				{
					cout << "YES" << endl;
				}
				else
				{
					cout << "NO" << endl;
				}
				break;

			case 4:
				flag =1;
				int erase_pos = std::find(V.begin(), V.end(), el);
				V.erase(V.begin() + erase_pos);
				break;

			case 5:
				cout << V.size() << endl;
				break;

			case 6:
				std::sort(V.begin(), V.end()
					);
				break;

			case 7:
				for(std::vector<int>::iterator  i=V.begin(); i != V.end(); ++i)
			    {
			        cout << *i << " ";
			    }
			    cout << endl;
				break;
		}

	}
	return 0;
}