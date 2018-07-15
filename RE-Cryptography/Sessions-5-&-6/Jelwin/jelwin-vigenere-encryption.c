#include<stdio.h>
#include<ctype.h>
int main()
{
	int i=0,j;
        FILE *a;
        FILE *b;
	FILE *c;
        char ch,d[10];
        a= fopen("jelwin-message-vigenere.txt","r");
	b= fopen("jelwin-keyfile-vigenere.txt","r");
        c= fopen("jelwin-vigenere_ciphertext.txt","w");
	while((ch=getc(b))!=EOF)
	{
		
		d[i]=ch;
		i++;
	}
	j=i-1;i=0;
	while((ch=getc(a))!=EOF)
	{
		if((ch>=97)&&(ch<=122))
		{
			putc((ch+d[i]+1-194)%26+'a',c);
			i++;
		}
		else
			putc(ch,c);
		if(i>=j)
			i=0;
	}
	fclose(a);
	fclose(b);
	fclose(c);
	return 0;
}
