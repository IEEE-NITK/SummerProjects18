#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
int main()
{	
	char key[]="abc";
<<<<<<< HEAD
	int keylen,j=0;
=======
	int keylen,j=1;
>>>>>>> 1373cf81369813a33545105fcb68fe14446dfd69
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
<<<<<<< HEAD
			my_char= ((my_char-'a' + key[j]-'a')%26 + 'a');
			
		}
		else if (my_char>= 'A' && my_char<= 'Z')
		{
			my_char = ((my_char-'A' +key[j]-'A')%26 + 'A');
			
		}
		fout<<my_char;
=======
			my_char= ((my_char + key[j])%26 + 'a');
			fout<< my_char;
		}
		else if (my_char>= 'A' && my_char<= 'Z')
		{
			my_char = ((my_char +key[j])%26 + 'A');
			fout<<my_char;
		}
>>>>>>> 1373cf81369813a33545105fcb68fe14446dfd69
		j++;
		
	}
	fin.close();
	fout.close();
	return 0;
}
