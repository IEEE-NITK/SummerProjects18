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
				for( i=0;i<1000;i++)
				{
					for(int j=i+1;j<1000-i;j++)
					{
						if(arr[j]>arr[j+1])
						{
							//swap
							swap = arr[j];
							arr[j] = arr[j+1];
							arr[j+1] = swap;

						}
					}
				}
				
				break;

			case 3:
				flag =1;
				for(i=0;i<1000;i++)
				{
					if(arr[i]==el)
					{
						flag =0;
						cout << "found at position " << i << endl;
						break;
					}
				}
				if(flag)
					cout<< "element not found\n";
				break;

			case 4:
				flag =1;
				for(i=1000-1;i>0;i--)
				{
					if(arr[i]==el)
					{
						flag =0;
						cout << "found at position " << i << endl;
						break;
					}
				}
				if(flag)
					cout<< "element not found\n";
				break;

			case 5:
				for(i=1;i<1000;i++)
				{
					//swap
					swap =arr[i];
					arr[i] = arr[0];
					arr[0] = swap;
				}
				cout << endl;
				for(i=0;i<1000;i++)
				{
					cout << arr[i] << " ";
				}
				cout << endl;
				break;

			case 6:
				for(i=1000-1;i>0;i--)
				{
					//swap
					swap =arr[i];
					arr[i] = arr[0];
					arr[0] = swap;
				}
				cout << endl;
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