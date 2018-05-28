#include <iostream>
#include <algorithm>
using namespace std;

bool customSort1(pair<int, int> a, pair<int, int> b) {
	return a.first==b.first?a.second<b.second:a.first<b.first;
}

bool customSort2(pair<int, int> a, pair<int, int> b) {
	return a.second==b.second?a.first<b.first:a.second<b.second;
}

int main(int argc, char const *argv[])
{
	pair <int, int> arr[1000];
	int flag =0;
	int num;
	int i;
	int j;
	pair <int, int> swap;
	for(i=0;i<1000;i++)
	{
		arr[i].first = 0;
		arr[i].second = 0;
	}
	cin >> num;
	
	for (int k = 0; k < num; ++k)
	{
		int tmp;
		cin >> tmp;
		int el;
		int el2;
		int pos;

		if(tmp==1 || tmp == 2 )
		{
			cin >> pos;
		}
		if(tmp==1)
		{
			cin >> el;
			cin >> el2;
			//cout >> el;
			flag = 1;
		}
		switch(tmp)
		{
			case 1:
				arr[pos].first = el;
				arr[pos].second = el2;
				
				break;

			case 2:

				if(pos ==1)
				{
					std::sort(arr,arr+1000, customSort1);
				}
				else if(pos==2)
				{
					std::sort(arr,arr+1000,customSort2);
				}
				else
				{
					cout << "Invalid input" << endl;
				}
				
				break;


			case 3:
				cout << endl;
				for(i=0;i<1000;i++)
				{
					cout << "(" << arr[i].first << "," << arr[i].second << ")" << " , ";
				}
				cout << endl;
				break;

		}

	}
	return 0;
}