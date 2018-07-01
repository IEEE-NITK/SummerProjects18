#include <iostream>
#include<fstream>
#include <string>
using namespace std;
int main()
{
	char msg;
	int key;
	cin>>key;
	key=key%26;
	ifstream fin;
	fin.open("t3.txt",ios::in);
	ofstream fout;
	fout.open("niwedita-substitution_ciphertext.txt",ios::out);
	while(!fin.eof())
	{
		fin.get(msg);
		if (msg>='0' && msg<='9')
		{
			msg=msg+key;
			if (msg>'9')
			{
				msg='0'+ msg - '9'-1;
			}
		}
		else if (msg>='a' && msg<='z')
		{
			msg=msg+key;
			if (msg>'z')
			{
				msg= msg+'a'-'z'-1;
			}
		}
		fout<<msg;
	}
	fin.close();
	fout.close();
	return 0;
}
