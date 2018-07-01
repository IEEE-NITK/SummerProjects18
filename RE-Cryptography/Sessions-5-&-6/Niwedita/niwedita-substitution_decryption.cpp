#include<iostream>
#include<fstream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	char key[4],msg[9];
	char x;
	int fl=0,kl=0,z=0,j;
	ifstream fin;
	fin.open("t3.txt", ios::in);
	ifstream kin;
	kin.open("key3.txt", ios::in);
	ofstream fout;
	fout.open("niwedita-substitution_decrypted.txt", ios::out);
	while(!kin.eof())
	{
		kin.get(x);
		key[kl]=x;
		kl++;
	}
	char my_char[9];
	while(!fin.eof())
	{
		fin.get(x);
		my_char[fl];
		fl++;
	}
	msg[7]=my_char[7];
	for(j=6;j>=0;j--,z++)
	{
		if(z==3)
		{
			z=0;
		}
		msg[j]=my_char[j]-key[3-z]+msg[j+1];
		if(msg[j]>'Z')
		{
			msg[j]=msg[j]-'Z'+'A'-1;
		}
	}
	fout<<msg;
	fin.close();
	fout.close();
	kin.close();
	return 0;
}

		