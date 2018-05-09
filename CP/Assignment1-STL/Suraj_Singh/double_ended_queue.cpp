#include <iostream>
#include <deque>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
	int num;
	deque<int> dq;

	cin >> num;

	for (int i = 0; i < num; ++i)
	{
		int tmp;

		cin >> tmp;

		int el;
		if(tmp == 3 || tmp ==4)
		{
			cin >> el;
		}

		switch(tmp)
		{
			case 1:
				if(!dq.empty())
					cout << dq.front() << endl;
				else
					cout << "queue is empty" <<endl;
				break;
			case 2:
				if(!dq.empty())
					cout << dq.back() <<endl;
				else
					cout << "queue is empty" <<endl;
				break;

			case 3:
				dq.push_front(el);
				break;
			case 4:
				dq.push_back(el);
				break;
			case 5:
				if(!dq.empty())
					dq.pop_front();
				else
					cout << "underflow" <<endl;
				break;
			case 6:
				if(!dq.empty())
					dq.pop_back();
				else
					cout << "underflow" <<endl;
				break;
			case 7:
				cout << dq.size() << endl;
				break;

			default:
				cout << "invalid input" << endl;
		}
	}
	return 0;
}