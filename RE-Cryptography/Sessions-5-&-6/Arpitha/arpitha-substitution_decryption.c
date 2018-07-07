#include<stdio.h>
#include<string.h>
#include<ctype.h>

void main(){
	char str[9];
	char k[28];
	char ch;
	int i=0;
	char c;
	int t;
	int x=0;

	FILE *f;
	f=fopen("vandana-substitution_cipher.txt","r");
	while(!(feof(f))){
		fscanf(f,"%c",&c);
		str[i]=c;
		i++;
		
	}
	str[i-2]='\0';
	i=0;
	fclose(f);
	f=fopen("vandana-keyfile-substitution.txt","r");
	while(!(feof(f))){
		fscanf(f,"%c",&c);
		k[i]=c;
		i++;
		
	}
	k[i-2]='\0';
	i=0;
	c=str[i];
	fclose(f);
	while(c!='\0'){
		if(isalpha(c)){
			for(x=0;x<=25;x++){
				if(k[x]==c)
					break;
			}
			t=x+97;
			str[i]=(char)t;
		}		
		
		i++;
		c=str[i];
	}
	f=fopen("arpitha-substitution_decrypted.txt","w");
	i=0;
	c=str[i];
	while(c!='\0'){
		fprintf(f,"%c",c);
		i++;
		c=str[i];
	}
}
