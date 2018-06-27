#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<ctype.h>

int main(){
	printf("Enter a number\n");
	int r;
	scanf("%d",&r);
//r=2 is current key
	FILE *m;
	FILE *c;
	char ch;
	m= fopen("ryan-caesar_decrypted.txt","w");
	c= fopen("niranjan-caesar_ciphertext.txt","r");

//For caesar decryption the key is subtracted from the cipher text
	while((ch = getc(c))!= EOF){
		if(islower(ch)){
			ch=ch-97-r;

//If the result on subtraction is less than zero, 26 is added to the answer
		    	if(ch<0){
		        	ch=ch+26;
		     	}	
		     	ch=ch+97;
            		putc(ch, m);
		}
		else
            		putc(ch, m);

	}
	fclose(m);
	fclose(c);
	return 0;
}
