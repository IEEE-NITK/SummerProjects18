#include<bits/stdc++.h>

using namespace std;

int main()

{
 queue<int>Q;

int q,c,x;

cin>>q;

   while(q--)

     {
 cin>>c;

      switch(c)

          {
 case 1:cout<<Q.front();
		cout<<endl;

                   break;

            case 2:cout<<Q.back();
		cout<<endl;

                   break;

            case 3:cin>>x;

                   Q.push(x);

                   break;

            case 4:Q.pop();

                   break;

            case 5:cout<<Q.size();
		   cout<<endl;
                   break;

            }

     }

}
