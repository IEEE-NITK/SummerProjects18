#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{	
	int key;
	cin>>key;
	ifstream fin;
	fin.open("niwedita-caesar_ciphertext.txt", ios::in);
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
			cout<< my_char;
		}
		else if (my_char>= 'A' && my_char<= 'Z')
		{
			my_char = my_char +key;
			if (my_char>'Z')
			{
				my_char = my_char - 'Z'+ 'A' -1;
			}
			cout<<my_char;
		}
	}
	cout<<endl;
	return 0;
}