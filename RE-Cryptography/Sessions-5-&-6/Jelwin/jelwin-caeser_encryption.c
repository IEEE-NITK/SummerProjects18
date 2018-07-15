#include<stdio.h>
#include<ctype.h>
int main()
{
	int i;
	char c,a;
	scanf("%d",&i);
	FILE *f1;
	FILE *f2;
	f1=fopen("jelwin-message-caeser.txt","r");
	f2=fopen("jelwin-caeser_cyphertext.txt","w");
	while((c=getc(f1))!=EOF)
	{
		if(isupper(c))
			putc((c+i-65)%26+'A',f2);
		else if(islower(c))
			putc((c+i-97)%26+'a',f2);
		else	
			putc(c,f2);
	}
	fclose(f1);
	fclose(f2);
}
