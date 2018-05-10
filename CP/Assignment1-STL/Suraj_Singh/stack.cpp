#include <iostream>
#include <stack>
using namespace std;
int main(int argc, char const *argv[])
{
	int num;
	stack<int> S; 
	int flag =0;
	cin >> num;
	for (int i = 0; i < num; ++i)
	{
		int tmp;
		cin >> tmp;
		int el;
		if(tmp==2)
		{
			cin >> el;
			//cout >> el;
			flag = 1;
		}
		switch(tmp)
		{
			case 1:
				if(!S.empty())
				{
					cout << S.top();
				}
				else
				{
					cout << "Empty" <<endl;
				}
				break;

			case 2:
				S.push(el);
				break;
			case 3:
				if(!S.empty())
				{
					cout << S.pop();
				}
				else
				{
					cout << "Underflow!" <<endl;
				}
				break;

			case 4:
				cout << S.size();
				break;
		}

	}
	return 0;
}