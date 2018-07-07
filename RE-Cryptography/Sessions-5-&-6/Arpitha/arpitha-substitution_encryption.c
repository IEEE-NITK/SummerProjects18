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


	FILE *f;
	f=fopen("arpitha-message-substitution.txt","r");
	while(!(feof(f))){
		fscanf(f,"%c",&c);
		str[i]=c;
		i++;
		
	}
	str[i-2]='\0';
	i=0;
	fclose(f);
	f=fopen("arpitha-keyfile-substitution.txt","r");
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
			t=(int)c;
			t-=97;
			str[i]=k[t];
		}		
		
		i++;
		c=str[i];
	}
	
	f=fopen("arpitha-substitution_ciphertext.txt","w");
	i=0;
	c=str[i];
	while(c!='\0'){
		fprintf(f,"%c",c);
		i++;
		c=str[i];
	}
}
