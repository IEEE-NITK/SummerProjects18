#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<ctype.h>

int main(){
	FILE *m;
	FILE *c;
	FILE *k;
	char chc,chk;
	m= fopen("ryan-vigenere_decrypted.txt","w");
	k= fopen("niranjan-keyfile-vigenere.txt","r");
	c= fopen("niranjan-vigenere_ciphertext.txt","r");
//The value of the corresponding letter of the key is subtracted from the cipher text for vigenere decryption
	while((chc = getc(c))!= EOF){
		if(isalpha(chc)){
			chk=getc(k);
			if(islower(chk)==0){

				fseek(k,0,SEEK_SET);
				chk=getc(k);
			}
			chc=chc-chk-1;
//add 26 to the letter value if the answer is less than zero
		    	if(chc<0){
		        	chc=chc+26;
		     	}	
		     	chc=chc+97;
            		putc(chc, m);
		}
		else
            		putc(chc, m);

	}
	fclose(m);
	fclose(c);
	fclose(k);
	return 0;
}
