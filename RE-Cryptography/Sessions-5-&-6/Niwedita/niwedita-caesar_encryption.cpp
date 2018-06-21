#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{	
	int key;
	cin>>key;
	ifstream fin;
	fin.open("t1.txt", ios::in);
	ofstream fout;
	fout.open("niwedita-caesar_ciphertext.txt",ios::out);
	char my_char;
	while(!fin.eof())
	{
		fin.get(my_char);
		if (my_char>='a' && my_char<='z')
		{
			my_char = my_char + key;
			if (my_char>'z')
			{
				my_char = my_char - 'z'+'a' -1;
			}
			fout << my_char;
		}
		else if (my_char>= 'A' && my_char<= 'Z')
		{
			my_char = my_char +key;
			if (my_char>'Z')
			{
				my_char = my_char - 'Z'+ 'A' -1;
			}
			fout << my_char;
		}
	}
	fin.close;
	fout.close();
	return 0;
}
