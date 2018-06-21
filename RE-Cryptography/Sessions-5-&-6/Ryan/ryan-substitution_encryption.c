#include<stdio.h>
#include<ctype.h>

int main(){

        FILE *m;
        FILE *c;
	FILE *k;
        char chm,chk,ch;
	char a[26];
        m= fopen("ryan-message-substitution.txt","r");
	k= fopen("ryan-keyfile-substitution.txt","r");
        c= fopen("ryan-substitution_ciphertext.txt","w");
	for(int i=0;i<26;i++){
		a[i]=getc(k);
	}
	fclose(k);
        while((chm = getc(m))!= EOF){
	       	if(isalpha(chm)){
			
			putc(a[chm-97], c);
		}
                else
                        putc(chm, c);

        }
        fclose(m);
        fclose(c);
        return 0;




}
