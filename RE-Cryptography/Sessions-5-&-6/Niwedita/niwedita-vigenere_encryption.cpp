#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
int main()
{	
	char key[]="abc";
	int keylen,j=1;
	keylen = strlen(key);
	ifstream fin;
	fin.open("t2.txt", ios::in);
	ofstream fout;
	fout.open("niwedita-vigenere_ciphertext.txt",ios::out);
	char my_char;
	while(!fin.eof())
	{
		fin.get(my_char);
		if (j==keylen)
		{
			j=0;
		}
		if (my_char>='a' && my_char<='z')
		{
			my_char= ((my_char + key[j])%26 + 'a');
			fout<< my_char;
		}
		else if (my_char>= 'A' && my_char<= 'Z')
		{
			my_char = ((my_char +key[j])%26 + 'A');
			fout<<my_char;
		}
		j++;
		
	}
	fin.close();
	fout.close();
	return 0;
}
