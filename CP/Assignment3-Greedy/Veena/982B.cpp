#include <iostream>

#include <bits/stdc++.h>

using namespace std;



int main()

{

  int n,i,j=0;

  pair <int,int> w[200009];

 

  string s1;


  cin>>n;

    	for(i=0;i<n;i++)

    	{

        	cin >> w[i].first;


        	w[i].second=i+1;

    	}

cin>>s1;
 stack <int> s;

sort(w,w+n);


    	for(i=0;i<2*n;i++)

    	{

		if(s1.at(i)=='0')

		{

	  		s.push(w[j].second);

	  		cout<<s.top()<<" ";

			j++;

    		}

        	else

		{

			cout<<s.top()<<" ";

			s.pop();

		}

	}

cout<<endl;

}
  