#include<bits/stdc++.h>

using namespace std;

int main()

{
  vector<int>v;

  vector<int>::iterator it;

    int q,x,y,c;

cin>>q;

while(q--)

   {
 cin>>c;

      switch(c)

          {
case 1: cin>>x;

                   v.push_back(x);

                   break;

           case 2: cin>>x>>y;

                   v[x-1]=y;

                   break;

           case 3:cin>>x;

                  if(find(v.begin(),v.end(),x)!=v.end())

                     {	cout<<"yes"<<endl;	}

                  else

                     {	cout<<"no"<<endl;	}

                  
 break;

           case 4:cin>>x;

                  v.erase(find(v.begin(),v.end(),x));

                     break;

           case 5:cout<<v.size()<<endl;

                  break;

           case 6:sort(v.begin(),v.end());

                  break;

           case 7:for(it=v.begin();it!=v.end();++it)

                  cout<<*it<<"\t";

                  cout<<endl;

                  break;
         }

   }

 return 0;

 }
