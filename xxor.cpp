//https://www.codechef.com/viewsolution/18639735
#include <iostream>
using namespace std;
 
int main() {
    	int i,j,l,r,n,q;
	cin>>n>>q;
	int a[n];
		for(i=0;i<n;i++)
	        cin>>a[i];
    int binary[31][10009],prefix[31][10009];
    for(int i=0; i<31; i++)
	    for(int j=0; j<n; j++)
		binary[i][j] = (bool)(a[j] & (1<<i));
 
    for(int i=0; i<31; i++)
	prefix[i][0] = 0;
 
    for(int i=0; i<31; i++)
	    for(int j=0; j<n; j++)
		prefix[i][j] = prefix[i][j-1] + binary[i][j];
   
	while(q--)
	{
	    cin>>l>>r;
	 int X=0;
for(int i=0; i<31; i++)
{
	int count1 = prefix[i][r-1] - prefix[i][l-2];
	int count0 = r-l+1 - count1;
 
	if(count0 > count1)
		X |= (1<<i); 
 
}cout<<X<<endl;
	}
	return 0;
} 
