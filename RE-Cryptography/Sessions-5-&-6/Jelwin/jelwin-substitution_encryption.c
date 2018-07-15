#include<stdio.h>
int main()
{	
	int i;
        FILE *a;
        FILE *b;
	FILE *c;
        char ch;
	char k[26];
        a= fopen("jelwin-message_substitution.txt","r");
	b= fopen("jelwin-keyfile-substitution.txt","r");
        c= fopen("jelwin-substitution_ciphertext.txt","w");
	for(i=97;i<122;i++)
	{
		k[i]=getc(b);
	}
        while((ch=getc(a))!= EOF)
	       	if((ch>=97)&&(ch<=122))
			putc(k[ch], c);
                else
                        putc(ch, c);
	fclose(a);
        fclose(b);
        fclose(c);
        return 0;
}
