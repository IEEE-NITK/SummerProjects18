#include<bits/stdc++.h>
#define m 1000000007
using namespace std;
int main()
{
	int c=0,k=0;
	string str;
	cin>>str;
	for(int i=str.size()-1;i>=0;i--){
		if(str[i]=='b')
            c++;
        else{
            k+=c;
            c*=2;
            k%=m;
            c%=m;
        }
	}
	cout<<k;

}
