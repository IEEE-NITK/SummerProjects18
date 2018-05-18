#include<bits/stdc++.h>

using namespace std;

int main()

{

stack<int>s;

int q,c,x;

cin>>q;

while(q--)

   {
 	cin>>c;

       switch(c)

       {

          case 1:cout<<s.top();
			cout<<endl;

                break;

          case 2: cin>>x;

                 s.push(x);

                 break;

         case 3: s.pop();

                 break;
 
         case 4:cout<<s.size();
			cout<<endl;

                 break;


       }


   }

  return 0;

}
