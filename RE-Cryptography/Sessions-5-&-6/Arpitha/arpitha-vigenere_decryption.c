#include<stdio.h>
#include<string.h>
#include<ctype.h>

void main(){
	char str[2000];
	char k[50];
	int ctr=0;
	char ch;
	int i=0;
	char c;
	int t;
	int l;
	int t2;

	FILE *f;
	f=fopen("vandana-vigenere_ciphertext.txt","r");
	while(!(feof(f))){
		fscanf(f,"%c",&c);
		str[i]=c;
		i++;
		
	}
	str[i-2]='\0';
	i=0;
	fclose(f);
	f=fopen("vandana-keyfile-vigenere.txt","r");
	while(!(feof(f))){
		fscanf(f,"%c",&c);
		k[i]=c;
		i++;
		
	}
	k[i-2]='\0';
	i=3;
	c=str[i];
	fclose(f);

	l=strlen(k);

	ctr=0;
	ch=k[ctr];
	while(c!='\0'){
		if(islower(c)){
			t=(int)c;
			t-=97;
			t2=(int)ch;
			t2-=97;
			t=t-t2;
			if(t<=0)
				t+=26;
			t=t+97-1;
			str[i]=(char)t;
			ctr++;
			ch=k[ctr%l];
		}		
		
		i++;
		c=str[i];
	}
	
	f=fopen("arpitha-vigenere_decrypted.txt","w");
	i=0;
	c=str[i];
	while(c!='\0'){
		fprintf(f,"%c",c);
		i++;
		c=str[i];
	}
}
