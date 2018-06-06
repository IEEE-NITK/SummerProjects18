#include<bits/stdc++.h>

#include<string.h>


#include<iostream>
using namespace std;


int main()

{

int i,j;

char s1[10],s2[10],p1[10],p2[10],conc[11],s[11];

scanf("%s%s",&s1,&s2);


p1[0]=s1[0];

p2[0]=s2[0];

conc[0]=p1[0];

conc[1]=p2[0];


s[0]=p1[0];

	for(i=1;i<(strlen(s1));i++)

	{

	
	p1[i]=s1[i];

	s[i]=p1[i];

	s[i+1]=p2[0];

	

	if(strcmp(s,conc) < 0)

	{        for(j=0;j<=i+1;j++)

	    	conc[j]=s[j]; 
	   	}

	else{

	    	   break;

	 	}

	}

printf("%s\n",conc);

}