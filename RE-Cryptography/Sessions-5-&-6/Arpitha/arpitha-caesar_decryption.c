#include<stdio.h>
#include<string.h>
#include<ctype.h>

void main(){
	char str[1500];
	int i=0;
	char c;
	int t;
	FILE *f;
	f=fopen("vandana-caesar_cipher.txt","r");
	while(!(feof(f))){
		fscanf(f,"%c",&c);
		str[i]=c;
		i++;
		
	}
	str[i]='\0';
	i=0;
	c=str[i];

	while(c!='\0'){
		if(isalpha(c)){
			t=(int)c;
			t-=97;
			t-=3;
			if(t<0)
				t+=26;
			t+=97;
			str[i]=(char)t;
		}		
		
		i++;
		c=str[i];
	}

	fclose(f);

	f=fopen("arpitha-caesar_decrypted.txt","w");
	i=0;
	c=str[i];
	while(c!='\0'){
		fprintf(f,"%c",c);
		i++;
		c=str[i];
	}
}
