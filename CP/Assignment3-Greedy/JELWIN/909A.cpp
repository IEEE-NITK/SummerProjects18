#include<iostream>
#include<string>
using namespace std;
int main()
{
	string f,e;
	int i,l;
	cin>>f;
	cin>>e;
	for(i=0;f[i]!='\0';i++)
		f[i]=tolower(f[i]);
	for(i=0;e[i]!='\0';i++)
		e[i]=tolower(e[i]);
	cout<<f[0];
	l=f.length();
	for(i=1;i<l;i++)
	{
		if(f[i]<e[0])
		{
			cout<<f[i];
		}
		if(f[i]>=e[0])
			break;
	}
	cout<<e[0];
	return 0;
}
			

