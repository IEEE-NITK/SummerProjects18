#include <bits/stdc++.h>
using namespace std;

//Your code here
int main()
{
	vector<int> v;
	int q;
	scanf("%d",&q);
	while(q)
	{
		int ch;
		scanf("%d",&ch);
		if(ch==1)
		{
			int ch1;
			scanf("%d",&ch1);
			v.push_back(ch1);
			 }	 
			 
		if(ch==2)
		{
		int ch1,ch2;
		scanf("%d %d",&ch1,&ch2);
		v[ch1]=ch2;	 	
			 }
			 
		if(ch==3)
		{
			int ch1;
			scanf("%d",&ch1);
			vector<int>::iterator it =find(v.begin(),v.end(),ch1);
			if(it!=v.end())
			cout<<"Yes"<<endl;
			else
			cout<<"No"<<endl;
		}
		
		if(ch==4)
		{
			int k;
			cin>>k;	
			vector<int>::iterator it =find(v.begin(),v.end(),k);
			v.erase(it);
		}
	
		if(ch==5)
		{
			cout<<v.size()<<endl;
		}
		
		if(ch==6)
		sort(v.begin(),v.end());

		if(ch==7)
		{
			for(vector<int>::iterator i=v.begin();i!=v.end();i++)
			printf("%d ",*i);
			
			printf("\n");
				}		
		q--;
		
	}
	return 0;
}
