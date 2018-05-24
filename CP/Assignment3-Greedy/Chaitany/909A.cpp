#include<bits/stdc++.h>
using namespace std;

int main()
{
	string fname,lname;
	cin >> fname;
	cin >> lname;

	string pre1, pre2, temp, result;
	pre1 = "";
	pre1 += fname[0];
	pre2 = "";
	pre2 += lname[0];
	result = pre1 + pre2;

	for (int i = 1; fname[i]; i++)
	{
		pre1 += fname[i];
		temp = pre1 + pre2;

		if (temp < result)
		{
			result = temp;
		}
	}

	cout << result;
}
