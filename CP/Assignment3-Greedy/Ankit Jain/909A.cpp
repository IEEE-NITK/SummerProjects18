#include<bits/stdc++.h>
using namespace std;
main()
{
	string s;
	int i;
	char a[10], b[10];
	cin>>a>>b;
	s.push_back(a[i]);
	for(i=1;a[i]!='\0';i++)
		if (a[i]<b[0])
			s.push_back(a[i]);
		else break;
	s.push_back(b[0]);
	cout<<s<<endl;
}