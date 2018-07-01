#include<iostream>
#include<fstream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	char key[1000];
	char x;
	int keylen=0,j=0;
	ifstream fin;
	fin.open("t2.txt", ios::in);
	ifstream kin;
	kin.open("key.txt", ios::in);
	ofstream fout;
	fout.open("niwedita-vigenere_decrypted.txt", ios::out);
	while(!kin.eof())
	{
		kin.get(x);
		key[keylen]=x;
		keylen++;
	}
	char my_char;
	while(!fin.eof())
	{
		fin.get(my_char);
		if(j==keylen)
		j=0;
		if(my_char>='a' && my_char<='z')
		{
			my_char=((my_char-'a') +26 -(key[j]-'a')%26 + 'a');
		}
		else if(my_char>='A' && my_char<='Z')
		{
		my_char = ((my_char-'A') +26-(key[j]-'A')%26 + 'A');
		}
		fout << my_char;
		j++;	
	}
	fin.close();
	fout.close();
	kin.close();
	return 0;
}