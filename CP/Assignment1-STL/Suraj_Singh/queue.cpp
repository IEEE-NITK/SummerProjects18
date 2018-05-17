#include <iostream>
#include <queue>
using namespace std;
int main(int argc, char const *argv[])
{
	int num;
	queue<int> Q; 
	int flag =0;
	cin >> num;
	for (int i = 0; i < num; ++i)
	{
		int tmp;
		cin >> tmp;
		int el;
		if(tmp==3)
		{
			cin >> el;
			//cout >> el;
			flag = 1;
		}
		switch(tmp)
		{
			case 1:
				if(!Q.empty())
				{
					cout << Q.front() << endl;
				}
				else
				{
					cout << "Empty" <<endl;
				}
				break;

			case 2:
				if(!Q.empty())
				{
					cout << Q.back() << endl;
				}
				else
				{
					cout << "Empty" <<endl;
				}
				break;

			case 3:
				Q.push(el);
				break;
			case 4:
				Q.pop();
				break;

			case 5:
				cout << Q.size();
				break;
		}

	}
	return 0;
}