#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;


int main(int argc, char const *argv[])
{
	int arr[1000];
	memset(arr, 0, 1000 * sizeof(arr[0]));
	int flag =0;
	int num;
	cin >> num;
	int swap;
	int i;
	for (int k = 0; k < num; ++k)
	{
		int tmp;
		cin >> tmp;
		int el;
		int pos;

		if(tmp ==1 || tmp==2)
		{
			cin >> pos;
		}
		if(tmp==1  || tmp == 3 || tmp==4)
		{
			cin >> el;
			//cout >> el;
			flag = 1;
		}
		switch(tmp)
		{
			case 1:
				arr[pos] = el;
				//1000++;
				break;

			case 2:
				std::sort(arr,arr+1000);
				break;

			case 3:
				cout << (lower_bound(arr, arr+1000, el)  - arr) <<endl;
				break;

			case 4:
				cout << (upper_bound(arr, arr+1000, el) - arr)<<endl;
				break;
				

			case 5:
				std::next_permutation(arr,arr+1000);
				for(i=0;i<1000;i++)
				{
					cout << arr[i] << " ";
				}
				cout << endl;
				break;


			case 6:
				std::prev_permutation(arr,arr+1000);
				for(i=0;i<1000;i++)
				{
					cout << arr[i] << " ";
				}
				cout << endl;
				break;
		}

	}
	return 0;
}