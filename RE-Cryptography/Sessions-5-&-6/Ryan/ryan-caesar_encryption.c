#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<ctype.h>

int main(){
	printf("Enter a number\n");
	int r;
	scanf("%d",&r);
	FILE *m;
	FILE *c;
	char ch;
	m= fopen("ryan-message-caesar.txt","r");
	c= fopen("ryan-caesar_ciphertext.txt","w");
	while((ch = getc(m))!= EOF){
		if(isupper(ch))
			putc(((ch+r-65)%26)+65, c);
		else if(islower(ch))
                        putc(((ch+r-97)%26)+97, c);
		else
                        putc(ch, c);

	}
	fclose(m);
	fclose(c);
	return 0;
}
