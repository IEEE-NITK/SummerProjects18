#include<stdio.h>
#include<ctype.h>

int main(){

        FILE *m;
        FILE *c;
	FILE *k;
        char chm,chk,ch;
        m= fopen("ryan-message-vigenere.txt","r");
	k= fopen("ryan-keyfile-vigenere.txt","r");
        c= fopen("ryan-vigenere_ciphertext.txt","w");
        while((chm = getc(m))!= EOF){
	       	if(isalpha(chm)){
			chk=getc(k);
			if(islower(chk)==0){
				
				fseek(k,0,SEEK_SET);
				chk=getc(k);	
			}

			putc(((chm+chk-193)%26)+97, c);
		}
                else
                        putc(chm, c);

        }
        fclose(m);
        fclose(c);
	fclose(k);
        return 0;




}
