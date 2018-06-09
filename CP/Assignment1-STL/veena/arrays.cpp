#include<bits/stdc++.h>

using namespace std;

int main()

{
 int a[1000];

memset(a,0,1000*sizeof(int));

int q,x,y,c,i;

cin>>q;

   while(q--)

   {
		cin>>c;

      switch(c)

      {
		case 1:cin>>x>>y;

               a[x-1]=y;

              break;
	
       case 2:
	
              sort(a,a+1000);

              break;

	       case 3:cin>>x;
 
		            cout<<(lower_bound(a,a+1000,x))-a<<endl;

	      break;

	       case 4:cin>>x;

		             cout<<(upper_bound(a,a+1000,x))-a<<endl;
      
	       break;
       case 5:next_permutation(a,a+1000);
 
		            for(i=0;i<1000;i++)

		             {		cout<<a[i]<<" ";	}

		             cout<<endl;

 		break;

	       case 6:prev_permutation(a,a+1000);

        	      for(i=0;i<1000;i++)

            		  {		cout<<a[i]<<" ";	}

              		cout<<endl;

              break;

            }
 

   }
  
 return 0;

}