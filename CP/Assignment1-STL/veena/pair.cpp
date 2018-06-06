 #include<bits/stdc++.h>

using namespace std;



bool myfxn(pair<int,int> &a, pair<int,int> &b)

{
	
	if(a.second!=b.second)
	return (a.second<b.second)
	else
	return (a.first<b.first);


}


main()

{

	pair <int,int> p[1000];

	int n=sizeof(p)/sizeof(p[0]);

	int q,x,y,z,c;

	cin>>q;

	while(q--)

	{

		cin>>c;

		switch(c)
		{

		case 1:	cin>>x>>y>>z;

			p[x-1]=make_pair(y,z);

		break;
		
		case 2:	sort(p,p+n);

		break;
		
		case 3:	sort(p,p+n,myfxn);

		break;
		
		case 4:	for(int i=0;i<n;i++)


				cout<<"("<<p[i].first<<","<<p[i].second<<") ";

		break;

		default:break;

		}

	}

}