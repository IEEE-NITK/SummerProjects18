#include <bits/stdc++.h>
using namespace std;

//Your code here
bool sortbysec(const pair<int,int> &a ,const pair<int,int> &b)
{return(a.second<b.second);
}
int main()
{
	pair<int,int> pr[1000]=make_pair(0,0);
	int q;
	cin>>q;
	while(q)
	{
		int ch;
		cin>>ch;
		
		if(ch==1)
		{
			int ch1,ch2,ch3;
			cin>>ch1>>ch2>>ch3;
			pr[ch1]=make_pair(ch2,ch3);
		}
		
		if(ch==2)
		{
			int k;
			cin>>k;
			if(k==1)
			sort(pr,pr+1000);
 
 			if(k==2)
			 sort(pr,pr+1000,sortbysec);	
		}

		if(ch==3)
		{
			int i;
			for(i=0;i<1000;i++)
			cout<<"("<<pr[i].first<<pr[i].second<<")"<<endl;
		}
		q--;
	}
	return 0;
}
