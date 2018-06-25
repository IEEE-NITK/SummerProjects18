#include<stdio.h>
#include<string.h>
#include<ctype.h>

void main(){
	char str[1500];
	char k[20];
	int ctr=0;
	char ch;
	int i=0;
	char c;
	int t;
	int l;
	int t2;

	FILE *f;
	f=fopen("arpitha-message-vigenere.txt","r");
	while(!(feof(f))){
		fscanf(f,"%c",&c);
		str[i]=c;
		i++;
		
	}
	str[i-2]='\0';
	i=0;
	fclose(f);
	f=fopen("arpitha-keyfile-vigenere.txt","r");
	while(!(feof(f))){
		fscanf(f,"%c",&c);
		k[i]=c;
		i++;
		
	}
	k[i-2]='\0';
	i=0;
	c=str[i];
	fclose(f);

	l=strlen(k);

	ctr=0;
	ch=k[ctr];
	while(c!='\0'){
		if(isalpha(c)){
			t=(int)c;
			t-=97;
			t2=(int)ch;
			t2-=97;
			t=t+t2+1;
			t=t%26;
			t+=97;
			str[i]=(char)t;
			ctr++;
			ch=k[ctr%l];
		}		
		
		i++;
		c=str[i];
	}
	
	f=fopen("arpitha-vigenere_ciphertext.txt","w");
	i=0;
	c=str[i];
	while(c!='\0'){
		fprintf(f,"%c",c);
		i++;
		c=str[i];
	}
}
