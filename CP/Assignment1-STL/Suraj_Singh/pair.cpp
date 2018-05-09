#include <iostream>
#include <algorithm>
using namespace std;



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
					for(int i=0;i<1000;i++)
					{
						for(j=i;j<1000-i-1;j++)
						{
							if(arr[j].first>arr[j+1].first)
							{
								//swap

								swap = arr[j];

								arr[j] = arr[j+1];
								arr[j+1] = swap;

							}
						}
					}
				}
				else if(pos==2)
				{
					for(int i=0;i<1000;i++)
					{
						for(j=i;j<1000-i-1;j++)
						{
							if(arr[j].second>arr[j+1].second)
							{
								//swap

								swap = arr[j];

								arr[j] = arr[j+1];
								arr[j+1] = swap;

							}
						}
					}

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